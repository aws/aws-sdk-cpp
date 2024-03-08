/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Configuration for inference in prompt configuration</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/InferenceConfiguration">AWS
   * API Reference</a></p>
   */
  class InferenceConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API InferenceConfiguration();
    AWS_BEDROCKAGENT_API InferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API InferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline double GetTemperature() const{ return m_temperature; }

    
    inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }

    
    inline void SetTemperature(double value) { m_temperatureHasBeenSet = true; m_temperature = value; }

    
    inline InferenceConfiguration& WithTemperature(double value) { SetTemperature(value); return *this;}


    
    inline double GetTopP() const{ return m_topP; }

    
    inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }

    
    inline void SetTopP(double value) { m_topPHasBeenSet = true; m_topP = value; }

    
    inline InferenceConfiguration& WithTopP(double value) { SetTopP(value); return *this;}


    
    inline int GetTopK() const{ return m_topK; }

    
    inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }

    
    inline void SetTopK(int value) { m_topKHasBeenSet = true; m_topK = value; }

    
    inline InferenceConfiguration& WithTopK(int value) { SetTopK(value); return *this;}


    
    inline int GetMaximumLength() const{ return m_maximumLength; }

    
    inline bool MaximumLengthHasBeenSet() const { return m_maximumLengthHasBeenSet; }

    
    inline void SetMaximumLength(int value) { m_maximumLengthHasBeenSet = true; m_maximumLength = value; }

    
    inline InferenceConfiguration& WithMaximumLength(int value) { SetMaximumLength(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetStopSequences() const{ return m_stopSequences; }

    
    inline bool StopSequencesHasBeenSet() const { return m_stopSequencesHasBeenSet; }

    
    inline void SetStopSequences(const Aws::Vector<Aws::String>& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = value; }

    
    inline void SetStopSequences(Aws::Vector<Aws::String>&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences = std::move(value); }

    
    inline InferenceConfiguration& WithStopSequences(const Aws::Vector<Aws::String>& value) { SetStopSequences(value); return *this;}

    
    inline InferenceConfiguration& WithStopSequences(Aws::Vector<Aws::String>&& value) { SetStopSequences(std::move(value)); return *this;}

    
    inline InferenceConfiguration& AddStopSequences(const Aws::String& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(value); return *this; }

    
    inline InferenceConfiguration& AddStopSequences(Aws::String&& value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(std::move(value)); return *this; }

    
    inline InferenceConfiguration& AddStopSequences(const char* value) { m_stopSequencesHasBeenSet = true; m_stopSequences.push_back(value); return *this; }

  private:

    double m_temperature;
    bool m_temperatureHasBeenSet = false;

    double m_topP;
    bool m_topPHasBeenSet = false;

    int m_topK;
    bool m_topKHasBeenSet = false;

    int m_maximumLength;
    bool m_maximumLengthHasBeenSet = false;

    Aws::Vector<Aws::String> m_stopSequences;
    bool m_stopSequencesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
