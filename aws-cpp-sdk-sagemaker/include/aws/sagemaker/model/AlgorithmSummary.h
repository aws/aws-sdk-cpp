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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/AlgorithmStatus.h>
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
   * <p>Provides summary information about an algorithm.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AlgorithmSummary
  {
  public:
    AlgorithmSummary();
    AlgorithmSummary(Aws::Utils::Json::JsonView jsonValue);
    AlgorithmSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }

    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }

    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }

    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }

    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline AlgorithmSummary& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline AlgorithmSummary& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}

    /**
     * <p>The name of the algorithm that is described by the summary.</p>
     */
    inline AlgorithmSummary& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline void SetAlgorithmArn(const char* value) { m_algorithmArnHasBeenSet = true; m_algorithmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline AlgorithmSummary& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline AlgorithmSummary& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline AlgorithmSummary& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}


    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmDescription() const{ return m_algorithmDescription; }

    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline bool AlgorithmDescriptionHasBeenSet() const { return m_algorithmDescriptionHasBeenSet; }

    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline void SetAlgorithmDescription(const Aws::String& value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription = value; }

    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline void SetAlgorithmDescription(Aws::String&& value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription = std::move(value); }

    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline void SetAlgorithmDescription(const char* value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription.assign(value); }

    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline AlgorithmSummary& WithAlgorithmDescription(const Aws::String& value) { SetAlgorithmDescription(value); return *this;}

    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline AlgorithmSummary& WithAlgorithmDescription(Aws::String&& value) { SetAlgorithmDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the algorithm.</p>
     */
    inline AlgorithmSummary& WithAlgorithmDescription(const char* value) { SetAlgorithmDescription(value); return *this;}


    /**
     * <p>A timestamp that shows when the algorithm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the algorithm was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the algorithm was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the algorithm was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the algorithm was created.</p>
     */
    inline AlgorithmSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the algorithm was created.</p>
     */
    inline AlgorithmSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The overall status of the algorithm.</p>
     */
    inline const AlgorithmStatus& GetAlgorithmStatus() const{ return m_algorithmStatus; }

    /**
     * <p>The overall status of the algorithm.</p>
     */
    inline bool AlgorithmStatusHasBeenSet() const { return m_algorithmStatusHasBeenSet; }

    /**
     * <p>The overall status of the algorithm.</p>
     */
    inline void SetAlgorithmStatus(const AlgorithmStatus& value) { m_algorithmStatusHasBeenSet = true; m_algorithmStatus = value; }

    /**
     * <p>The overall status of the algorithm.</p>
     */
    inline void SetAlgorithmStatus(AlgorithmStatus&& value) { m_algorithmStatusHasBeenSet = true; m_algorithmStatus = std::move(value); }

    /**
     * <p>The overall status of the algorithm.</p>
     */
    inline AlgorithmSummary& WithAlgorithmStatus(const AlgorithmStatus& value) { SetAlgorithmStatus(value); return *this;}

    /**
     * <p>The overall status of the algorithm.</p>
     */
    inline AlgorithmSummary& WithAlgorithmStatus(AlgorithmStatus&& value) { SetAlgorithmStatus(std::move(value)); return *this;}

  private:

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet;

    Aws::String m_algorithmDescription;
    bool m_algorithmDescriptionHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    AlgorithmStatus m_algorithmStatus;
    bool m_algorithmStatusHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
