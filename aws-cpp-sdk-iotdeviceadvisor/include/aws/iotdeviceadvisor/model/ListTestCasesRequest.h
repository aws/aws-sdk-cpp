/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   */
  class AWS_IOTDEVICEADVISOR_API ListTestCasesRequest : public IoTDeviceAdvisorRequest
  {
  public:
    ListTestCasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestCases"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Lists all the qualification test cases in the test suite.</p>
     */
    inline bool GetIntendedForQualification() const{ return m_intendedForQualification; }

    /**
     * <p>Lists all the qualification test cases in the test suite.</p>
     */
    inline bool IntendedForQualificationHasBeenSet() const { return m_intendedForQualificationHasBeenSet; }

    /**
     * <p>Lists all the qualification test cases in the test suite.</p>
     */
    inline void SetIntendedForQualification(bool value) { m_intendedForQualificationHasBeenSet = true; m_intendedForQualification = value; }

    /**
     * <p>Lists all the qualification test cases in the test suite.</p>
     */
    inline ListTestCasesRequest& WithIntendedForQualification(bool value) { SetIntendedForQualification(value); return *this;}


    /**
     * <p>Requests the test cases max results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Requests the test cases max results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Requests the test cases max results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Requests the test cases max results.</p>
     */
    inline ListTestCasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Requests the test cases next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Requests the test cases next token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Requests the test cases next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Requests the test cases next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Requests the test cases next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Requests the test cases next token.</p>
     */
    inline ListTestCasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Requests the test cases next token.</p>
     */
    inline ListTestCasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Requests the test cases next token.</p>
     */
    inline ListTestCasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_intendedForQualification;
    bool m_intendedForQualificationHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
