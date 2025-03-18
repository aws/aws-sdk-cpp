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
    AWS_MACIE2_API ApiCallDetails() = default;
    AWS_MACIE2_API ApiCallDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ApiCallDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the operation that was invoked most recently and produced the
     * finding.</p>
     */
    inline const Aws::String& GetApi() const { return m_api; }
    inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }
    template<typename ApiT = Aws::String>
    void SetApi(ApiT&& value) { m_apiHasBeenSet = true; m_api = std::forward<ApiT>(value); }
    template<typename ApiT = Aws::String>
    ApiCallDetails& WithApi(ApiT&& value) { SetApi(std::forward<ApiT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Amazon Web Services service that provides the operation, for
     * example: s3.amazonaws.com.</p>
     */
    inline const Aws::String& GetApiServiceName() const { return m_apiServiceName; }
    inline bool ApiServiceNameHasBeenSet() const { return m_apiServiceNameHasBeenSet; }
    template<typename ApiServiceNameT = Aws::String>
    void SetApiServiceName(ApiServiceNameT&& value) { m_apiServiceNameHasBeenSet = true; m_apiServiceName = std::forward<ApiServiceNameT>(value); }
    template<typename ApiServiceNameT = Aws::String>
    ApiCallDetails& WithApiServiceName(ApiServiceNameT&& value) { SetApiServiceName(std::forward<ApiServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first date and time, in UTC and extended ISO 8601 format, when any
     * operation was invoked and produced the finding.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstSeen() const { return m_firstSeen; }
    inline bool FirstSeenHasBeenSet() const { return m_firstSeenHasBeenSet; }
    template<typename FirstSeenT = Aws::Utils::DateTime>
    void SetFirstSeen(FirstSeenT&& value) { m_firstSeenHasBeenSet = true; m_firstSeen = std::forward<FirstSeenT>(value); }
    template<typename FirstSeenT = Aws::Utils::DateTime>
    ApiCallDetails& WithFirstSeen(FirstSeenT&& value) { SetFirstSeen(std::forward<FirstSeenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time, in UTC and extended ISO 8601 format, when the
     * specified operation (api) was invoked and produced the finding.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeen() const { return m_lastSeen; }
    inline bool LastSeenHasBeenSet() const { return m_lastSeenHasBeenSet; }
    template<typename LastSeenT = Aws::Utils::DateTime>
    void SetLastSeen(LastSeenT&& value) { m_lastSeenHasBeenSet = true; m_lastSeen = std::forward<LastSeenT>(value); }
    template<typename LastSeenT = Aws::Utils::DateTime>
    ApiCallDetails& WithLastSeen(LastSeenT&& value) { SetLastSeen(std::forward<LastSeenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_api;
    bool m_apiHasBeenSet = false;

    Aws::String m_apiServiceName;
    bool m_apiServiceNameHasBeenSet = false;

    Aws::Utils::DateTime m_firstSeen{};
    bool m_firstSeenHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeen{};
    bool m_lastSeenHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
