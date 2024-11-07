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
  class CreateConfiguredModelAlgorithmResult
  {
  public:
    AWS_CLEANROOMSML_API CreateConfiguredModelAlgorithmResult();
    AWS_CLEANROOMSML_API CreateConfiguredModelAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API CreateConfiguredModelAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmArn() const{ return m_configuredModelAlgorithmArn; }
    inline void SetConfiguredModelAlgorithmArn(const Aws::String& value) { m_configuredModelAlgorithmArn = value; }
    inline void SetConfiguredModelAlgorithmArn(Aws::String&& value) { m_configuredModelAlgorithmArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmArn(const char* value) { m_configuredModelAlgorithmArn.assign(value); }
    inline CreateConfiguredModelAlgorithmResult& WithConfiguredModelAlgorithmArn(const Aws::String& value) { SetConfiguredModelAlgorithmArn(value); return *this;}
    inline CreateConfiguredModelAlgorithmResult& WithConfiguredModelAlgorithmArn(Aws::String&& value) { SetConfiguredModelAlgorithmArn(std::move(value)); return *this;}
    inline CreateConfiguredModelAlgorithmResult& WithConfiguredModelAlgorithmArn(const char* value) { SetConfiguredModelAlgorithmArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateConfiguredModelAlgorithmResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateConfiguredModelAlgorithmResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateConfiguredModelAlgorithmResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configuredModelAlgorithmArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
