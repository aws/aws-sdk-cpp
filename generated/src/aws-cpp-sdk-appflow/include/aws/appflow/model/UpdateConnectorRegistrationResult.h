/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{
  class UpdateConnectorRegistrationResult
  {
  public:
    AWS_APPFLOW_API UpdateConnectorRegistrationResult();
    AWS_APPFLOW_API UpdateConnectorRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API UpdateConnectorRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the connector being updated.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }

    /**
     * <p>The ARN of the connector being updated.</p>
     */
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArn = value; }

    /**
     * <p>The ARN of the connector being updated.</p>
     */
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArn = std::move(value); }

    /**
     * <p>The ARN of the connector being updated.</p>
     */
    inline void SetConnectorArn(const char* value) { m_connectorArn.assign(value); }

    /**
     * <p>The ARN of the connector being updated.</p>
     */
    inline UpdateConnectorRegistrationResult& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}

    /**
     * <p>The ARN of the connector being updated.</p>
     */
    inline UpdateConnectorRegistrationResult& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the connector being updated.</p>
     */
    inline UpdateConnectorRegistrationResult& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}

  private:

    Aws::String m_connectorArn;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
