/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/PositionFiltering.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{
  class DescribeTrackerResult
  {
  public:
    AWS_LOCATIONSERVICE_API DescribeTrackerResult();
    AWS_LOCATIONSERVICE_API DescribeTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API DescribeTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeTrackerResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the tracker resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeTrackerResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The optional description for the tracker resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for the tracker resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The optional description for the tracker resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The optional description for the tracker resource.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The optional description for the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource.</p>
     */
    inline DescribeTrackerResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource.</p>
     */
    inline DescribeTrackerResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>A key identifier for an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/create-keys.html">AWS
     * KMS customer managed key</a> assigned to the Amazon Location resource.</p>
     */
    inline DescribeTrackerResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The position filtering method of the tracker resource.</p>
     */
    inline const PositionFiltering& GetPositionFiltering() const{ return m_positionFiltering; }

    /**
     * <p>The position filtering method of the tracker resource.</p>
     */
    inline void SetPositionFiltering(const PositionFiltering& value) { m_positionFiltering = value; }

    /**
     * <p>The position filtering method of the tracker resource.</p>
     */
    inline void SetPositionFiltering(PositionFiltering&& value) { m_positionFiltering = std::move(value); }

    /**
     * <p>The position filtering method of the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithPositionFiltering(const PositionFiltering& value) { SetPositionFiltering(value); return *this;}

    /**
     * <p>The position filtering method of the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithPositionFiltering(PositionFiltering&& value) { SetPositionFiltering(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline DescribeTrackerResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline DescribeTrackerResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline DescribeTrackerResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline DescribeTrackerResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline DescribeTrackerResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline DescribeTrackerResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the tracker resource.</p>
     */
    inline DescribeTrackerResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetTrackerArn() const{ return m_trackerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline void SetTrackerArn(const Aws::String& value) { m_trackerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline void SetTrackerArn(Aws::String&& value) { m_trackerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline void SetTrackerArn(const char* value) { m_trackerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline DescribeTrackerResult& WithTrackerArn(const Aws::String& value) { SetTrackerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline DescribeTrackerResult& WithTrackerArn(Aws::String&& value) { SetTrackerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p> <ul> <li> <p>Format example:
     * <code>arn:aws:geo:region:account-id:tracker/ExampleTracker</code> </p> </li>
     * </ul>
     */
    inline DescribeTrackerResult& WithTrackerArn(const char* value) { SetTrackerArn(value); return *this;}


    /**
     * <p>The name of the tracker resource.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerName = value; }

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerName = std::move(value); }

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerName.assign(value); }

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The name of the tracker resource.</p>
     */
    inline DescribeTrackerResult& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}


    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeTrackerResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the tracker resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeTrackerResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;

    Aws::String m_description;

    Aws::String m_kmsKeyId;

    PositionFiltering m_positionFiltering;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_trackerArn;

    Aws::String m_trackerName;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
