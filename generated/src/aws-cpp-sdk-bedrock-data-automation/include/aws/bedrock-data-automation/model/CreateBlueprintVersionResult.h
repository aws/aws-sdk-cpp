﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/Blueprint.h>
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
namespace BedrockDataAutomation
{
namespace Model
{
  /**
   * <p>Create Blueprint Version Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CreateBlueprintVersionResponse">AWS
   * API Reference</a></p>
   */
  class CreateBlueprintVersionResult
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API CreateBlueprintVersionResult();
    AWS_BEDROCKDATAAUTOMATION_API CreateBlueprintVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKDATAAUTOMATION_API CreateBlueprintVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Blueprint& GetBlueprint() const{ return m_blueprint; }
    inline void SetBlueprint(const Blueprint& value) { m_blueprint = value; }
    inline void SetBlueprint(Blueprint&& value) { m_blueprint = std::move(value); }
    inline CreateBlueprintVersionResult& WithBlueprint(const Blueprint& value) { SetBlueprint(value); return *this;}
    inline CreateBlueprintVersionResult& WithBlueprint(Blueprint&& value) { SetBlueprint(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateBlueprintVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateBlueprintVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateBlueprintVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Blueprint m_blueprint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
