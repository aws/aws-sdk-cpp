/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_LOCATIONSERVICE_API DescribeTrackerResult
  {
  public:
    DescribeTrackerResult();
    DescribeTrackerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTrackerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p>
     */
    inline const Aws::String& GetTrackerArn() const{ return m_trackerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p>
     */
    inline void SetTrackerArn(const Aws::String& value) { m_trackerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p>
     */
    inline void SetTrackerArn(Aws::String&& value) { m_trackerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p>
     */
    inline void SetTrackerArn(const char* value) { m_trackerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p>
     */
    inline DescribeTrackerResult& WithTrackerArn(const Aws::String& value) { SetTrackerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p>
     */
    inline DescribeTrackerResult& WithTrackerArn(Aws::String&& value) { SetTrackerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the tracker resource. Used when you need
     * to specify a resource across all AWS.</p>
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

    Aws::String m_trackerArn;

    Aws::String m_trackerName;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
