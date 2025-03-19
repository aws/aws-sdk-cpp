/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the protected S3 bucket resource.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateS3BucketResource">AWS
   * API Reference</a></p>
   */
  class UpdateS3BucketResource
  {
  public:
    AWS_GUARDDUTY_API UpdateS3BucketResource() = default;
    AWS_GUARDDUTY_API UpdateS3BucketResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UpdateS3BucketResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the specified object prefixes. The S3 object will be
     * scanned only if it belongs to any of the specified object prefixes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectPrefixes() const { return m_objectPrefixes; }
    inline bool ObjectPrefixesHasBeenSet() const { return m_objectPrefixesHasBeenSet; }
    template<typename ObjectPrefixesT = Aws::Vector<Aws::String>>
    void SetObjectPrefixes(ObjectPrefixesT&& value) { m_objectPrefixesHasBeenSet = true; m_objectPrefixes = std::forward<ObjectPrefixesT>(value); }
    template<typename ObjectPrefixesT = Aws::Vector<Aws::String>>
    UpdateS3BucketResource& WithObjectPrefixes(ObjectPrefixesT&& value) { SetObjectPrefixes(std::forward<ObjectPrefixesT>(value)); return *this;}
    template<typename ObjectPrefixesT = Aws::String>
    UpdateS3BucketResource& AddObjectPrefixes(ObjectPrefixesT&& value) { m_objectPrefixesHasBeenSet = true; m_objectPrefixes.emplace_back(std::forward<ObjectPrefixesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_objectPrefixes;
    bool m_objectPrefixesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
