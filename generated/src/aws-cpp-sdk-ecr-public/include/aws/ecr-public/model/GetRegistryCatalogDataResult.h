/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/RegistryCatalogData.h>
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
namespace ECRPublic
{
namespace Model
{
  class GetRegistryCatalogDataResult
  {
  public:
    AWS_ECRPUBLIC_API GetRegistryCatalogDataResult() = default;
    AWS_ECRPUBLIC_API GetRegistryCatalogDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API GetRegistryCatalogDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The catalog metadata for the public registry.</p>
     */
    inline const RegistryCatalogData& GetRegistryCatalogData() const { return m_registryCatalogData; }
    template<typename RegistryCatalogDataT = RegistryCatalogData>
    void SetRegistryCatalogData(RegistryCatalogDataT&& value) { m_registryCatalogDataHasBeenSet = true; m_registryCatalogData = std::forward<RegistryCatalogDataT>(value); }
    template<typename RegistryCatalogDataT = RegistryCatalogData>
    GetRegistryCatalogDataResult& WithRegistryCatalogData(RegistryCatalogDataT&& value) { SetRegistryCatalogData(std::forward<RegistryCatalogDataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRegistryCatalogDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RegistryCatalogData m_registryCatalogData;
    bool m_registryCatalogDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
