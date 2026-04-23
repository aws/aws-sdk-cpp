/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API Difference
  {
  public:
    Difference();
    Difference(Aws::Utils::Json::JsonView jsonValue);
    Difference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about a <code>beforeBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline const BlobMetadata& GetBeforeBlob() const{ return m_beforeBlob; }

    /**
     * <p>Information about a <code>beforeBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline bool BeforeBlobHasBeenSet() const { return m_beforeBlobHasBeenSet; }

    /**
     * <p>Information about a <code>beforeBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline void SetBeforeBlob(const BlobMetadata& value) { m_beforeBlobHasBeenSet = true; m_beforeBlob = value; }

    /**
     * <p>Information about a <code>beforeBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline void SetBeforeBlob(BlobMetadata&& value) { m_beforeBlobHasBeenSet = true; m_beforeBlob = std::move(value); }

    /**
     * <p>Information about a <code>beforeBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline Difference& WithBeforeBlob(const BlobMetadata& value) { SetBeforeBlob(value); return *this;}

    /**
     * <p>Information about a <code>beforeBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline Difference& WithBeforeBlob(BlobMetadata&& value) { SetBeforeBlob(std::move(value)); return *this;}


    /**
     * <p>Information about an <code>afterBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline const BlobMetadata& GetAfterBlob() const{ return m_afterBlob; }

    /**
     * <p>Information about an <code>afterBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline bool AfterBlobHasBeenSet() const { return m_afterBlobHasBeenSet; }

    /**
     * <p>Information about an <code>afterBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline void SetAfterBlob(const BlobMetadata& value) { m_afterBlobHasBeenSet = true; m_afterBlob = value; }

    /**
     * <p>Information about an <code>afterBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline void SetAfterBlob(BlobMetadata&& value) { m_afterBlobHasBeenSet = true; m_afterBlob = std::move(value); }

    /**
     * <p>Information about an <code>afterBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline Difference& WithAfterBlob(const BlobMetadata& value) { SetAfterBlob(value); return *this;}

    /**
     * <p>Information about an <code>afterBlob</code> data type object, including the
     * ID, the file mode permission code, and the path.</p>
     */
    inline Difference& WithAfterBlob(BlobMetadata&& value) { SetAfterBlob(std::move(value)); return *this;}


    /**
     * <p>Whether the change type of the difference is an addition (A), deletion (D),
     * or modification (M).</p>
     */
    inline const ChangeTypeEnum& GetChangeType() const{ return m_changeType; }

    /**
     * <p>Whether the change type of the difference is an addition (A), deletion (D),
     * or modification (M).</p>
     */
    inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }

    /**
     * <p>Whether the change type of the difference is an addition (A), deletion (D),
     * or modification (M).</p>
     */
    inline void SetChangeType(const ChangeTypeEnum& value) { m_changeTypeHasBeenSet = true; m_changeType = value; }

    /**
     * <p>Whether the change type of the difference is an addition (A), deletion (D),
     * or modification (M).</p>
     */
    inline void SetChangeType(ChangeTypeEnum&& value) { m_changeTypeHasBeenSet = true; m_changeType = std::move(value); }

    /**
     * <p>Whether the change type of the difference is an addition (A), deletion (D),
     * or modification (M).</p>
     */
    inline Difference& WithChangeType(const ChangeTypeEnum& value) { SetChangeType(value); return *this;}

    /**
     * <p>Whether the change type of the difference is an addition (A), deletion (D),
     * or modification (M).</p>
     */
    inline Difference& WithChangeType(ChangeTypeEnum&& value) { SetChangeType(std::move(value)); return *this;}

  private:

    BlobMetadata m_beforeBlob;
    bool m_beforeBlobHasBeenSet;

    BlobMetadata m_afterBlob;
    bool m_afterBlobHasBeenSet;

    ChangeTypeEnum m_changeType;
    bool m_changeTypeHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
