/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Container for human task user interface information.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HumanTaskUiSummary">AWS
   * API Reference</a></p>
   */
  class HumanTaskUiSummary
  {
  public:
    AWS_SAGEMAKER_API HumanTaskUiSummary();
    AWS_SAGEMAKER_API HumanTaskUiSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HumanTaskUiSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the human task user interface.</p>
     */
    inline const Aws::String& GetHumanTaskUiName() const{ return m_humanTaskUiName; }

    /**
     * <p>The name of the human task user interface.</p>
     */
    inline bool HumanTaskUiNameHasBeenSet() const { return m_humanTaskUiNameHasBeenSet; }

    /**
     * <p>The name of the human task user interface.</p>
     */
    inline void SetHumanTaskUiName(const Aws::String& value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName = value; }

    /**
     * <p>The name of the human task user interface.</p>
     */
    inline void SetHumanTaskUiName(Aws::String&& value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName = std::move(value); }

    /**
     * <p>The name of the human task user interface.</p>
     */
    inline void SetHumanTaskUiName(const char* value) { m_humanTaskUiNameHasBeenSet = true; m_humanTaskUiName.assign(value); }

    /**
     * <p>The name of the human task user interface.</p>
     */
    inline HumanTaskUiSummary& WithHumanTaskUiName(const Aws::String& value) { SetHumanTaskUiName(value); return *this;}

    /**
     * <p>The name of the human task user interface.</p>
     */
    inline HumanTaskUiSummary& WithHumanTaskUiName(Aws::String&& value) { SetHumanTaskUiName(std::move(value)); return *this;}

    /**
     * <p>The name of the human task user interface.</p>
     */
    inline HumanTaskUiSummary& WithHumanTaskUiName(const char* value) { SetHumanTaskUiName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const{ return m_humanTaskUiArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline bool HumanTaskUiArnHasBeenSet() const { return m_humanTaskUiArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline void SetHumanTaskUiArn(const Aws::String& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline void SetHumanTaskUiArn(Aws::String&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline void SetHumanTaskUiArn(const char* value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline HumanTaskUiSummary& WithHumanTaskUiArn(const Aws::String& value) { SetHumanTaskUiArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline HumanTaskUiSummary& WithHumanTaskUiArn(Aws::String&& value) { SetHumanTaskUiArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human task user interface.</p>
     */
    inline HumanTaskUiSummary& WithHumanTaskUiArn(const char* value) { SetHumanTaskUiArn(value); return *this;}


    /**
     * <p>A timestamp when SageMaker created the human task user interface.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp when SageMaker created the human task user interface.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp when SageMaker created the human task user interface.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp when SageMaker created the human task user interface.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp when SageMaker created the human task user interface.</p>
     */
    inline HumanTaskUiSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp when SageMaker created the human task user interface.</p>
     */
    inline HumanTaskUiSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_humanTaskUiName;
    bool m_humanTaskUiNameHasBeenSet = false;

    Aws::String m_humanTaskUiArn;
    bool m_humanTaskUiArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
