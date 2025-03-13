/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>Specifies the details of a governed table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/TableObject">AWS
   * API Reference</a></p>
   */
  class TableObject
  {
  public:
    AWS_LAKEFORMATION_API TableObject() = default;
    AWS_LAKEFORMATION_API TableObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API TableObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location of the object.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    TableObject& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 ETag of the object. Returned by <code>GetTableObjects</code>
     * for validation and used to identify changes to the underlying data.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    TableObject& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the Amazon S3 object in bytes.</p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline TableObject& WithSize(long long value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
