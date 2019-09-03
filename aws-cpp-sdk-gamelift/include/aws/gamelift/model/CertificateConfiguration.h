/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/CertificateType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  class AWS_GAMELIFT_API CertificateConfiguration
  {
  public:
    CertificateConfiguration();
    CertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CertificateType& GetCertificateType() const{ return m_certificateType; }

    
    inline bool CertificateTypeHasBeenSet() const { return m_certificateTypeHasBeenSet; }

    
    inline void SetCertificateType(const CertificateType& value) { m_certificateTypeHasBeenSet = true; m_certificateType = value; }

    
    inline void SetCertificateType(CertificateType&& value) { m_certificateTypeHasBeenSet = true; m_certificateType = std::move(value); }

    
    inline CertificateConfiguration& WithCertificateType(const CertificateType& value) { SetCertificateType(value); return *this;}

    
    inline CertificateConfiguration& WithCertificateType(CertificateType&& value) { SetCertificateType(std::move(value)); return *this;}

  private:

    CertificateType m_certificateType;
    bool m_certificateTypeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
