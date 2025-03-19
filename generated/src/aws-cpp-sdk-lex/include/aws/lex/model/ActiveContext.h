/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/ActiveContextTimeToLive.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>A context is a variable that contains information about the current state of
   * the conversation between a user and Amazon Lex. Context can be set automatically
   * by Amazon Lex when an intent is fulfilled, or it can be set at runtime using the
   * <code>PutContent</code>, <code>PutText</code>, or <code>PutSession</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/ActiveContext">AWS
   * API Reference</a></p>
   */
  class ActiveContext
  {
  public:
    AWS_LEXRUNTIMESERVICE_API ActiveContext() = default;
    AWS_LEXRUNTIMESERVICE_API ActiveContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API ActiveContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the context.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActiveContext& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time or number of turns that a context remains active.</p>
     */
    inline const ActiveContextTimeToLive& GetTimeToLive() const { return m_timeToLive; }
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
    template<typename TimeToLiveT = ActiveContextTimeToLive>
    void SetTimeToLive(TimeToLiveT&& value) { m_timeToLiveHasBeenSet = true; m_timeToLive = std::forward<TimeToLiveT>(value); }
    template<typename TimeToLiveT = ActiveContextTimeToLive>
    ActiveContext& WithTimeToLive(TimeToLiveT&& value) { SetTimeToLive(std::forward<TimeToLiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    ActiveContext& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    ActiveContext& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ActiveContextTimeToLive m_timeToLive;
    bool m_timeToLiveHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
