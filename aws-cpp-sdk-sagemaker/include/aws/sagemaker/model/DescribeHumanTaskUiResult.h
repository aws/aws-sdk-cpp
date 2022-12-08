/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HumanTaskUiStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UiTemplateInfo.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeHumanTaskUiResult
  {
  public:
    AWS_SAGEMAKER_API DescribeHumanTaskUiResult();
    AWS_SAGEMAKER_API DescribeHumanTaskUiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeHumanTaskUiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface (worker task
     * template).</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const{ return m_humanTaskUiArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface (worker task
     * template).</p>
     */
    inline void SetHumanTaskUiArn(const Aws::String& value) { m_humanTaskUiArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface (worker task
     * template).</p>
     */
    inline void SetHumanTaskUiArn(Aws::String&& value) { m_humanTaskUiArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface (worker task
     * template).</p>
     */
    inline void SetHumanTaskUiArn(const char* value) { m_humanTaskUiArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface (worker task
     * template).</p>
     */
    inline DescribeHumanTaskUiResult& WithHumanTaskUiArn(const Aws::String& value) { SetHumanTaskUiArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface (worker task
     * template).</p>
     */
    inline DescribeHumanTaskUiResult& WithHumanTaskUiArn(Aws::String&& value) { SetHumanTaskUiArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface (worker task
     * template).</p>
     */
    inline DescribeHumanTaskUiResult& WithHumanTaskUiArn(const char* value) { SetHumanTaskUiArn(value); return *this;}


    /**
     * <p>The name of the human task user interface (worker task template).</p>
     */
    inline const Aws::String& GetHumanTaskUiName() const{ return m_humanTaskUiName; }

    /**
     * <p>The name of the human task user interface (worker task template).</p>
     */
    inline void SetHumanTaskUiName(const Aws::String& value) { m_humanTaskUiName = value; }

    /**
     * <p>The name of the human task user interface (worker task template).</p>
     */
    inline void SetHumanTaskUiName(Aws::String&& value) { m_humanTaskUiName = std::move(value); }

    /**
     * <p>The name of the human task user interface (worker task template).</p>
     */
    inline void SetHumanTaskUiName(const char* value) { m_humanTaskUiName.assign(value); }

    /**
     * <p>The name of the human task user interface (worker task template).</p>
     */
    inline DescribeHumanTaskUiResult& WithHumanTaskUiName(const Aws::String& value) { SetHumanTaskUiName(value); return *this;}

    /**
     * <p>The name of the human task user interface (worker task template).</p>
     */
    inline DescribeHumanTaskUiResult& WithHumanTaskUiName(Aws::String&& value) { SetHumanTaskUiName(std::move(value)); return *this;}

    /**
     * <p>The name of the human task user interface (worker task template).</p>
     */
    inline DescribeHumanTaskUiResult& WithHumanTaskUiName(const char* value) { SetHumanTaskUiName(value); return *this;}


    /**
     * <p>The status of the human task user interface (worker task template). Valid
     * values are listed below.</p>
     */
    inline const HumanTaskUiStatus& GetHumanTaskUiStatus() const{ return m_humanTaskUiStatus; }

    /**
     * <p>The status of the human task user interface (worker task template). Valid
     * values are listed below.</p>
     */
    inline void SetHumanTaskUiStatus(const HumanTaskUiStatus& value) { m_humanTaskUiStatus = value; }

    /**
     * <p>The status of the human task user interface (worker task template). Valid
     * values are listed below.</p>
     */
    inline void SetHumanTaskUiStatus(HumanTaskUiStatus&& value) { m_humanTaskUiStatus = std::move(value); }

    /**
     * <p>The status of the human task user interface (worker task template). Valid
     * values are listed below.</p>
     */
    inline DescribeHumanTaskUiResult& WithHumanTaskUiStatus(const HumanTaskUiStatus& value) { SetHumanTaskUiStatus(value); return *this;}

    /**
     * <p>The status of the human task user interface (worker task template). Valid
     * values are listed below.</p>
     */
    inline DescribeHumanTaskUiResult& WithHumanTaskUiStatus(HumanTaskUiStatus&& value) { SetHumanTaskUiStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the human task user interface was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the human task user interface was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp when the human task user interface was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the human task user interface was created.</p>
     */
    inline DescribeHumanTaskUiResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the human task user interface was created.</p>
     */
    inline DescribeHumanTaskUiResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const UiTemplateInfo& GetUiTemplate() const{ return m_uiTemplate; }

    
    inline void SetUiTemplate(const UiTemplateInfo& value) { m_uiTemplate = value; }

    
    inline void SetUiTemplate(UiTemplateInfo&& value) { m_uiTemplate = std::move(value); }

    
    inline DescribeHumanTaskUiResult& WithUiTemplate(const UiTemplateInfo& value) { SetUiTemplate(value); return *this;}

    
    inline DescribeHumanTaskUiResult& WithUiTemplate(UiTemplateInfo&& value) { SetUiTemplate(std::move(value)); return *this;}

  private:

    Aws::String m_humanTaskUiArn;

    Aws::String m_humanTaskUiName;

    HumanTaskUiStatus m_humanTaskUiStatus;

    Aws::Utils::DateTime m_creationTime;

    UiTemplateInfo m_uiTemplate;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
