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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>The number of in-progress human reviews you have has exceeded the number
   * allowed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/HumanLoopQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API HumanLoopQuotaExceededException
  {
  public:
    HumanLoopQuotaExceededException();
    HumanLoopQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    
    inline HumanLoopQuotaExceededException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    
    inline HumanLoopQuotaExceededException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    
    inline HumanLoopQuotaExceededException& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    
    inline HumanLoopQuotaExceededException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    
    inline HumanLoopQuotaExceededException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    
    inline HumanLoopQuotaExceededException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    
    inline HumanLoopQuotaExceededException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    
    inline HumanLoopQuotaExceededException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    
    inline HumanLoopQuotaExceededException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
