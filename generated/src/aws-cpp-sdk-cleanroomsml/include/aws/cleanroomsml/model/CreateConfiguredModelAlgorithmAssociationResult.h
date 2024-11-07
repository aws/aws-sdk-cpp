/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class CreateConfiguredModelAlgorithmAssociationResult
  {
  public:
    AWS_CLEANROOMSML_API CreateConfiguredModelAlgorithmAssociationResult();
    AWS_CLEANROOMSML_API CreateConfiguredModelAlgorithmAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API CreateConfiguredModelAlgorithmAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm
     * association.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const{ return m_configuredModelAlgorithmAssociationArn; }
    inline void SetConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { m_configuredModelAlgorithmAssociationArn = value; }
    inline void SetConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { m_configuredModelAlgorithmAssociationArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmAssociationArn(const char* value) { m_configuredModelAlgorithmAssociationArn.assign(value); }
    inline CreateConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    inline CreateConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { SetConfiguredModelAlgorithmAssociationArn(std::move(value)); return *this;}
    inline CreateConfiguredModelAlgorithmAssociationResult& WithConfiguredModelAlgorithmAssociationArn(const char* value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateConfiguredModelAlgorithmAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateConfiguredModelAlgorithmAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateConfiguredModelAlgorithmAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configuredModelAlgorithmAssociationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
