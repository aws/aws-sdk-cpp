/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Identifies the specific version of an intent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/Intent">AWS
   * API Reference</a></p>
   */
  class Intent
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API Intent() = default;
    AWS_LEXMODELBUILDINGSERVICE_API Intent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Intent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    Intent& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the intent.</p>
     */
    inline const Aws::String& GetIntentVersion() const { return m_intentVersion; }
    inline bool IntentVersionHasBeenSet() const { return m_intentVersionHasBeenSet; }
    template<typename IntentVersionT = Aws::String>
    void SetIntentVersion(IntentVersionT&& value) { m_intentVersionHasBeenSet = true; m_intentVersion = std::forward<IntentVersionT>(value); }
    template<typename IntentVersionT = Aws::String>
    Intent& WithIntentVersion(IntentVersionT&& value) { SetIntentVersion(std::forward<IntentVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_intentVersion;
    bool m_intentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
