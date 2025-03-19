/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/BlobMetadata.h>
#include <aws/codecommit/model/ChangeTypeEnum.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a set of differences for a commit
   * specifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Difference">AWS
   * API Reference</a></p>
   */
  class Difference
  {
  public:
    AWS_CODECOMMIT_API Difference() = default;
    AWS_CODECOMMIT_API Difference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Difference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about a <code>beforeBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline const BlobMetadata& GetBeforeBlob() const { return m_beforeBlob; }
    inline bool BeforeBlobHasBeenSet() const { return m_beforeBlobHasBeenSet; }
    template<typename BeforeBlobT = BlobMetadata>
    void SetBeforeBlob(BeforeBlobT&& value) { m_beforeBlobHasBeenSet = true; m_beforeBlob = std::forward<BeforeBlobT>(value); }
    template<typename BeforeBlobT = BlobMetadata>
    Difference& WithBeforeBlob(BeforeBlobT&& value) { SetBeforeBlob(std::forward<BeforeBlobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an <code>afterBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline const BlobMetadata& GetAfterBlob() const { return m_afterBlob; }
    inline bool AfterBlobHasBeenSet() const { return m_afterBlobHasBeenSet; }
    template<typename AfterBlobT = BlobMetadata>
    void SetAfterBlob(AfterBlobT&& value) { m_afterBlobHasBeenSet = true; m_afterBlob = std::forward<AfterBlobT>(value); }
    template<typename AfterBlobT = BlobMetadata>
    Difference& WithAfterBlob(AfterBlobT&& value) { SetAfterBlob(std::forward<AfterBlobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the change type of the difference is an addition (A), deletion (D),
     * or modification (M).</p>
     */
    inline ChangeTypeEnum GetChangeType() const { return m_changeType; }
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
    inline void SetChangeType(ChangeTypeEnum value) { m_changeTypeHasBeenSet = true; m_changeType = value; }
    inline Difference& WithChangeType(ChangeTypeEnum value) { SetChangeType(value); return *this;}
    ///@}
  private:

    BlobMetadata m_beforeBlob;
    bool m_beforeBlobHasBeenSet = false;

    BlobMetadata m_afterBlob;
    bool m_afterBlobHasBeenSet = false;

    ChangeTypeEnum m_changeType{ChangeTypeEnum::NOT_SET};
    bool m_changeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
