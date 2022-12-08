/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace FinSpaceData
{
namespace Model
{

  /**
   * Request for GetProgrammaticAccessCredentials operation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/GetProgrammaticAccessCredentialsRequest">AWS
   * API Reference</a></p>
   */
  class GetProgrammaticAccessCredentialsRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API GetProgrammaticAccessCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProgrammaticAccessCredentials"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;

    AWS_FINSPACEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The time duration in which the credentials remain valid. </p>
     */
    inline long long GetDurationInMinutes() const{ return m_durationInMinutes; }

    /**
     * <p>The time duration in which the credentials remain valid. </p>
     */
    inline bool DurationInMinutesHasBeenSet() const { return m_durationInMinutesHasBeenSet; }

    /**
     * <p>The time duration in which the credentials remain valid. </p>
     */
    inline void SetDurationInMinutes(long long value) { m_durationInMinutesHasBeenSet = true; m_durationInMinutes = value; }

    /**
     * <p>The time duration in which the credentials remain valid. </p>
     */
    inline GetProgrammaticAccessCredentialsRequest& WithDurationInMinutes(long long value) { SetDurationInMinutes(value); return *this;}


    /**
     * <p>The FinSpace environment identifier.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The FinSpace environment identifier.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The FinSpace environment identifier.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The FinSpace environment identifier.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The FinSpace environment identifier.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The FinSpace environment identifier.</p>
     */
    inline GetProgrammaticAccessCredentialsRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The FinSpace environment identifier.</p>
     */
    inline GetProgrammaticAccessCredentialsRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The FinSpace environment identifier.</p>
     */
    inline GetProgrammaticAccessCredentialsRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

  private:

    long long m_durationInMinutes;
    bool m_durationInMinutesHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
