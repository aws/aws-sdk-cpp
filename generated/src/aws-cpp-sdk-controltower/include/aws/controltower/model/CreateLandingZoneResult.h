/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
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
namespace ControlTower
{
namespace Model
{
  class CreateLandingZoneResult
  {
  public:
    AWS_CONTROLTOWER_API CreateLandingZoneResult() = default;
    AWS_CONTROLTOWER_API CreateLandingZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API CreateLandingZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the landing zone resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateLandingZoneResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier assigned to a <code>CreateLandingZone</code> operation.
     * You can use this identifier as an input of <code>GetLandingZoneOperation</code>
     * to check the operation's status.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const { return m_operationIdentifier; }
    template<typename OperationIdentifierT = Aws::String>
    void SetOperationIdentifier(OperationIdentifierT&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::forward<OperationIdentifierT>(value); }
    template<typename OperationIdentifierT = Aws::String>
    CreateLandingZoneResult& WithOperationIdentifier(OperationIdentifierT&& value) { SetOperationIdentifier(std::forward<OperationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLandingZoneResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
