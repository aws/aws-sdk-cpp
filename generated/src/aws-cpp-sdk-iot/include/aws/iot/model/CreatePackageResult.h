/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreatePackageResult
  {
  public:
    AWS_IOT_API CreatePackageResult() = default;
    AWS_IOT_API CreatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the software package.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    CreatePackageResult& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the package.</p>
     */
    inline const Aws::String& GetPackageArn() const { return m_packageArn; }
    template<typename PackageArnT = Aws::String>
    void SetPackageArn(PackageArnT&& value) { m_packageArnHasBeenSet = true; m_packageArn = std::forward<PackageArnT>(value); }
    template<typename PackageArnT = Aws::String>
    CreatePackageResult& WithPackageArn(PackageArnT&& value) { SetPackageArn(std::forward<PackageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreatePackageResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::String m_packageArn;
    bool m_packageArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
