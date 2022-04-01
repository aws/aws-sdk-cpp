﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MetricsSource.h>
#include <aws/sagemaker/model/FileSource.h>
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
   * <p>Represents the drift check explainability baselines that can be used when the
   * model monitor is set using the model package. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DriftCheckExplainability">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API DriftCheckExplainability
  {
  public:
    DriftCheckExplainability();
    DriftCheckExplainability(Aws::Utils::Json::JsonView jsonValue);
    DriftCheckExplainability& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const MetricsSource& GetConstraints() const{ return m_constraints; }

    
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }

    
    inline void SetConstraints(const MetricsSource& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    
    inline void SetConstraints(MetricsSource&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }

    
    inline DriftCheckExplainability& WithConstraints(const MetricsSource& value) { SetConstraints(value); return *this;}

    
    inline DriftCheckExplainability& WithConstraints(MetricsSource&& value) { SetConstraints(std::move(value)); return *this;}


    /**
     * <p>The explainability config file for the model.</p>
     */
    inline const FileSource& GetConfigFile() const{ return m_configFile; }

    /**
     * <p>The explainability config file for the model.</p>
     */
    inline bool ConfigFileHasBeenSet() const { return m_configFileHasBeenSet; }

    /**
     * <p>The explainability config file for the model.</p>
     */
    inline void SetConfigFile(const FileSource& value) { m_configFileHasBeenSet = true; m_configFile = value; }

    /**
     * <p>The explainability config file for the model.</p>
     */
    inline void SetConfigFile(FileSource&& value) { m_configFileHasBeenSet = true; m_configFile = std::move(value); }

    /**
     * <p>The explainability config file for the model.</p>
     */
    inline DriftCheckExplainability& WithConfigFile(const FileSource& value) { SetConfigFile(value); return *this;}

    /**
     * <p>The explainability config file for the model.</p>
     */
    inline DriftCheckExplainability& WithConfigFile(FileSource&& value) { SetConfigFile(std::move(value)); return *this;}

  private:

    MetricsSource m_constraints;
    bool m_constraintsHasBeenSet;

    FileSource m_configFile;
    bool m_configFileHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
