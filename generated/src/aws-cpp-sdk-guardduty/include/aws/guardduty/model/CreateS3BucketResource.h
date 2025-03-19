/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateS3BucketResource">AWS
   * API Reference</a></p>
   */
  class CreateS3BucketResource
  {
  public:
    AWS_GUARDDUTY_API CreateS3BucketResource() = default;
    AWS_GUARDDUTY_API CreateS3BucketResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CreateS3BucketResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    CreateS3BucketResource& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

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
    CreateS3BucketResource& WithObjectPrefixes(ObjectPrefixesT&& value) { SetObjectPrefixes(std::forward<ObjectPrefixesT>(value)); return *this;}
    template<typename ObjectPrefixesT = Aws::String>
    CreateS3BucketResource& AddObjectPrefixes(ObjectPrefixesT&& value) { m_objectPrefixesHasBeenSet = true; m_objectPrefixes.emplace_back(std::forward<ObjectPrefixesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_objectPrefixes;
    bool m_objectPrefixesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
