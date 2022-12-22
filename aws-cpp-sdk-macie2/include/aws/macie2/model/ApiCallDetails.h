/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an API operation that an entity invoked for an
   * affected resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ApiCallDetails">AWS
   * API Reference</a></p>
   */
  class ApiCallDetails
  {
  public:
    AWS_MACIE2_API ApiCallDetails();
    AWS_MACIE2_API ApiCallDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ApiCallDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the operation that was invoked most recently and produced the
     * finding.</p>
     */
    inline const Aws::String& GetApi() const{ return m_api; }

    /**
     * <p>The name of the operation that was invoked most recently and produced the
     * finding.</p>
     */
    inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }

    /**
     * <p>The name of the operation that was invoked most recently and produced the
     * finding.</p>
     */
    inline void SetApi(const Aws::String& value) { m_apiHasBeenSet = true; m_api = value; }

    /**
     * <p>The name of the operation that was invoked most recently and produced the
     * finding.</p>
     */
    inline void SetApi(Aws::String&& value) { m_apiHasBeenSet = true; m_api = std::move(value); }

    /**
     * <p>The name of the operation that was invoked most recently and produced the
     * finding.</p>
     */
    inline void SetApi(const char* value) { m_apiHasBeenSet = true; m_api.assign(value); }

    /**
     * <p>The name of the operation that was invoked most recently and produced the
     * finding.</p>
     */
    inline ApiCallDetails& WithApi(const Aws::String& value) { SetApi(value); return *this;}

    /**
     * <p>The name of the operation that was invoked most recently and produced the
     * finding.</p>
     */
    inline ApiCallDetails& WithApi(Aws::String&& value) { SetApi(std::move(value)); return *this;}

    /**
     * <p>The name of the operation that was invoked most recently and produced the
     * finding.</p>
     */
    inline ApiCallDetails& WithApi(const char* value) { SetApi(value); return *this;}


    /**
     * <p>The URL of the Amazon Web Service that provides the operation, for example:
     * s3.amazonaws.com.</p>
     */
    inline const Aws::String& GetApiServiceName() const{ return m_apiServiceName; }

    /**
     * <p>The URL of the Amazon Web Service that provides the operation, for example:
     * s3.amazonaws.com.</p>
     */
    inline bool ApiServiceNameHasBeenSet() const { return m_apiServiceNameHasBeenSet; }

    /**
     * <p>The URL of the Amazon Web Service that provides the operation, for example:
     * s3.amazonaws.com.</p>
     */
    inline void SetApiServiceName(const Aws::String& value) { m_apiServiceNameHasBeenSet = true; m_apiServiceName = value; }

    /**
     * <p>The URL of the Amazon Web Service that provides the operation, for example:
     * s3.amazonaws.com.</p>
     */
    inline void SetApiServiceName(Aws::String&& value) { m_apiServiceNameHasBeenSet = true; m_apiServiceName = std::move(value); }

    /**
     * <p>The URL of the Amazon Web Service that provides the operation, for example:
     * s3.amazonaws.com.</p>
     */
    inline void SetApiServiceName(const char* value) { m_apiServiceNameHasBeenSet = true; m_apiServiceName.assign(value); }

    /**
     * <p>The URL of the Amazon Web Service that provides the operation, for example:
     * s3.amazonaws.com.</p>
     */
    inline ApiCallDetails& WithApiServiceName(const Aws::String& value) { SetApiServiceName(value); return *this;}

    /**
     * <p>The URL of the Amazon Web Service that provides the operation, for example:
     * s3.amazonaws.com.</p>
     */
    inline ApiCallDetails& WithApiServiceName(Aws::String&& value) { SetApiServiceName(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon Web Service that provides the operation, for example:
     * s3.amazonaws.com.</p>
     */
    inline ApiCallDetails& WithApiServiceName(const char* value) { SetApiServiceName(value); return *this;}


    /**
     * <p>The first date and time, in UTC and extended ISO 8601 format, when any
     * operation was invoked and produced the finding.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSeen() const{ return m_firstSeen; }

    /**
     * <p>The first date and time, in UTC and extended ISO 8601 format, when any
     * operation was invoked and produced the finding.</p>
     */
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }

    /**
     * <p>The first date and time, in UTC and extended ISO 8601 format, when any
     * operation was invoked and produced the finding.</p>
     */
    inline void SetFirstSeen(const Aws::Utils::DateTime& value) { m_firstSeenHasBeenSet = true; m_firstSeen = value; }

    /**
     * <p>The first date and time, in UTC and extended ISO 8601 format, when any
     * operation was invoked and produced the finding.</p>
     */
    inline void SetFirstSeen(Aws::Utils::DateTime&& value) { m_firstSeenHasBeenSet = true; m_firstSeen = std::move(value); }

    /**
     * <p>The first date and time, in UTC and extended ISO 8601 format, when any
     * operation was invoked and produced the finding.</p>
     */
    inline ApiCallDetails& WithFirstSeen(const Aws::Utils::DateTime& value) { SetFirstSeen(value); return *this;}

    /**
     * <p>The first date and time, in UTC and extended ISO 8601 format, when any
     * operation was invoked and produced the finding.</p>
     */
    inline ApiCallDetails& WithFirstSeen(Aws::Utils::DateTime&& value) { SetFirstSeen(std::move(value)); return *this;}


    /**
     * <p>The most recent date and time, in UTC and extended ISO 8601 format, when the
     * specified operation (api) was invoked and produced the finding.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeen() const{ return m_lastSeen; }

    /**
     * <p>The most recent date and time, in UTC and extended ISO 8601 format, when the
     * specified operation (api) was invoked and produced the finding.</p>
     */
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }

    /**
     * <p>The most recent date and time, in UTC and extended ISO 8601 format, when the
     * specified operation (api) was invoked and produced the finding.</p>
     */
    inline void SetLastSeen(const Aws::Utils::DateTime& value) { m_lastSeenHasBeenSet = true; m_lastSeen = value; }

    /**
     * <p>The most recent date and time, in UTC and extended ISO 8601 format, when the
     * specified operation (api) was invoked and produced the finding.</p>
     */
    inline void SetLastSeen(Aws::Utils::DateTime&& value) { m_lastSeenHasBeenSet = true; m_lastSeen = std::move(value); }

    /**
     * <p>The most recent date and time, in UTC and extended ISO 8601 format, when the
     * specified operation (api) was invoked and produced the finding.</p>
     */
    inline ApiCallDetails& WithLastSeen(const Aws::Utils::DateTime& value) { SetLastSeen(value); return *this;}

    /**
     * <p>The most recent date and time, in UTC and extended ISO 8601 format, when the
     * specified operation (api) was invoked and produced the finding.</p>
     */
    inline ApiCallDetails& WithLastSeen(Aws::Utils::DateTime&& value) { SetLastSeen(std::move(value)); return *this;}

  private:

    Aws::String m_api;
    bool m_apiHasBeenSet = false;

    Aws::String m_apiServiceName;
    bool m_apiServiceNameHasBeenSet = false;

    Aws::Utils::DateTime m_firstSeen;
    bool m_firstSeenHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeen;
    bool m_lastSeenHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
