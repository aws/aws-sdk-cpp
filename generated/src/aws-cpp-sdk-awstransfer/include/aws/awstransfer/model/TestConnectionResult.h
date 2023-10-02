/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  class TestConnectionResult
  {
  public:
    AWS_TRANSFER_API TestConnectionResult();
    AWS_TRANSFER_API TestConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API TestConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the identifier of the connector object that you are testing.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }

    /**
     * <p>Returns the identifier of the connector object that you are testing.</p>
     */
    inline void SetConnectorId(const Aws::String& value) { m_connectorId = value; }

    /**
     * <p>Returns the identifier of the connector object that you are testing.</p>
     */
    inline void SetConnectorId(Aws::String&& value) { m_connectorId = std::move(value); }

    /**
     * <p>Returns the identifier of the connector object that you are testing.</p>
     */
    inline void SetConnectorId(const char* value) { m_connectorId.assign(value); }

    /**
     * <p>Returns the identifier of the connector object that you are testing.</p>
     */
    inline TestConnectionResult& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>Returns the identifier of the connector object that you are testing.</p>
     */
    inline TestConnectionResult& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>Returns the identifier of the connector object that you are testing.</p>
     */
    inline TestConnectionResult& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}


    /**
     * <p>Returns <code>OK</code> for successful test, or <code>ERROR</code> if the
     * test fails.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Returns <code>OK</code> for successful test, or <code>ERROR</code> if the
     * test fails.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>Returns <code>OK</code> for successful test, or <code>ERROR</code> if the
     * test fails.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>Returns <code>OK</code> for successful test, or <code>ERROR</code> if the
     * test fails.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>Returns <code>OK</code> for successful test, or <code>ERROR</code> if the
     * test fails.</p>
     */
    inline TestConnectionResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Returns <code>OK</code> for successful test, or <code>ERROR</code> if the
     * test fails.</p>
     */
    inline TestConnectionResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Returns <code>OK</code> for successful test, or <code>ERROR</code> if the
     * test fails.</p>
     */
    inline TestConnectionResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Returns <code>Connection succeeded</code> if the test is successful. Or,
     * returns a descriptive error message if the test fails. The following list
     * provides troubleshooting details, depending on the error message that you
     * receive.</p> <ul> <li> <p>Verify that your secret name aligns with the one in
     * Transfer Role permissions.</p> </li> <li> <p>Verify the server URL in the
     * connector configuration , and verify that the login credentials work
     * successfully outside of the connector.</p> </li> <li> <p>Verify that the secret
     * exists and is formatted correctly.</p> </li> <li> <p>Verify that the trusted
     * host key in the connector configuration matches the <code>ssh-keyscan</code>
     * output.</p> </li> </ul>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Returns <code>Connection succeeded</code> if the test is successful. Or,
     * returns a descriptive error message if the test fails. The following list
     * provides troubleshooting details, depending on the error message that you
     * receive.</p> <ul> <li> <p>Verify that your secret name aligns with the one in
     * Transfer Role permissions.</p> </li> <li> <p>Verify the server URL in the
     * connector configuration , and verify that the login credentials work
     * successfully outside of the connector.</p> </li> <li> <p>Verify that the secret
     * exists and is formatted correctly.</p> </li> <li> <p>Verify that the trusted
     * host key in the connector configuration matches the <code>ssh-keyscan</code>
     * output.</p> </li> </ul>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>Returns <code>Connection succeeded</code> if the test is successful. Or,
     * returns a descriptive error message if the test fails. The following list
     * provides troubleshooting details, depending on the error message that you
     * receive.</p> <ul> <li> <p>Verify that your secret name aligns with the one in
     * Transfer Role permissions.</p> </li> <li> <p>Verify the server URL in the
     * connector configuration , and verify that the login credentials work
     * successfully outside of the connector.</p> </li> <li> <p>Verify that the secret
     * exists and is formatted correctly.</p> </li> <li> <p>Verify that the trusted
     * host key in the connector configuration matches the <code>ssh-keyscan</code>
     * output.</p> </li> </ul>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>Returns <code>Connection succeeded</code> if the test is successful. Or,
     * returns a descriptive error message if the test fails. The following list
     * provides troubleshooting details, depending on the error message that you
     * receive.</p> <ul> <li> <p>Verify that your secret name aligns with the one in
     * Transfer Role permissions.</p> </li> <li> <p>Verify the server URL in the
     * connector configuration , and verify that the login credentials work
     * successfully outside of the connector.</p> </li> <li> <p>Verify that the secret
     * exists and is formatted correctly.</p> </li> <li> <p>Verify that the trusted
     * host key in the connector configuration matches the <code>ssh-keyscan</code>
     * output.</p> </li> </ul>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>Returns <code>Connection succeeded</code> if the test is successful. Or,
     * returns a descriptive error message if the test fails. The following list
     * provides troubleshooting details, depending on the error message that you
     * receive.</p> <ul> <li> <p>Verify that your secret name aligns with the one in
     * Transfer Role permissions.</p> </li> <li> <p>Verify the server URL in the
     * connector configuration , and verify that the login credentials work
     * successfully outside of the connector.</p> </li> <li> <p>Verify that the secret
     * exists and is formatted correctly.</p> </li> <li> <p>Verify that the trusted
     * host key in the connector configuration matches the <code>ssh-keyscan</code>
     * output.</p> </li> </ul>
     */
    inline TestConnectionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Returns <code>Connection succeeded</code> if the test is successful. Or,
     * returns a descriptive error message if the test fails. The following list
     * provides troubleshooting details, depending on the error message that you
     * receive.</p> <ul> <li> <p>Verify that your secret name aligns with the one in
     * Transfer Role permissions.</p> </li> <li> <p>Verify the server URL in the
     * connector configuration , and verify that the login credentials work
     * successfully outside of the connector.</p> </li> <li> <p>Verify that the secret
     * exists and is formatted correctly.</p> </li> <li> <p>Verify that the trusted
     * host key in the connector configuration matches the <code>ssh-keyscan</code>
     * output.</p> </li> </ul>
     */
    inline TestConnectionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Returns <code>Connection succeeded</code> if the test is successful. Or,
     * returns a descriptive error message if the test fails. The following list
     * provides troubleshooting details, depending on the error message that you
     * receive.</p> <ul> <li> <p>Verify that your secret name aligns with the one in
     * Transfer Role permissions.</p> </li> <li> <p>Verify the server URL in the
     * connector configuration , and verify that the login credentials work
     * successfully outside of the connector.</p> </li> <li> <p>Verify that the secret
     * exists and is formatted correctly.</p> </li> <li> <p>Verify that the trusted
     * host key in the connector configuration matches the <code>ssh-keyscan</code>
     * output.</p> </li> </ul>
     */
    inline TestConnectionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TestConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TestConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TestConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_connectorId;

    Aws::String m_status;

    Aws::String m_statusMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
