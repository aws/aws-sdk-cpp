/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputPreference.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The settings for Automatic Input Failover.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AutomaticInputFailoverSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AutomaticInputFailoverSettings
  {
  public:
    AutomaticInputFailoverSettings();
    AutomaticInputFailoverSettings(Aws::Utils::Json::JsonView jsonValue);
    AutomaticInputFailoverSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline const InputPreference& GetInputPreference() const{ return m_inputPreference; }

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline bool InputPreferenceHasBeenSet() const { return m_inputPreferenceHasBeenSet; }

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline void SetInputPreference(const InputPreference& value) { m_inputPreferenceHasBeenSet = true; m_inputPreference = value; }

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline void SetInputPreference(InputPreference&& value) { m_inputPreferenceHasBeenSet = true; m_inputPreference = std::move(value); }

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline AutomaticInputFailoverSettings& WithInputPreference(const InputPreference& value) { SetInputPreference(value); return *this;}

    /**
     * Input preference when deciding which input to make active when a previously
     * failed input has recovered.
     */
    inline AutomaticInputFailoverSettings& WithInputPreference(InputPreference&& value) { SetInputPreference(std::move(value)); return *this;}


    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline const Aws::String& GetSecondaryInputId() const{ return m_secondaryInputId; }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline bool SecondaryInputIdHasBeenSet() const { return m_secondaryInputIdHasBeenSet; }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline void SetSecondaryInputId(const Aws::String& value) { m_secondaryInputIdHasBeenSet = true; m_secondaryInputId = value; }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline void SetSecondaryInputId(Aws::String&& value) { m_secondaryInputIdHasBeenSet = true; m_secondaryInputId = std::move(value); }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline void SetSecondaryInputId(const char* value) { m_secondaryInputIdHasBeenSet = true; m_secondaryInputId.assign(value); }

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline AutomaticInputFailoverSettings& WithSecondaryInputId(const Aws::String& value) { SetSecondaryInputId(value); return *this;}

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline AutomaticInputFailoverSettings& WithSecondaryInputId(Aws::String&& value) { SetSecondaryInputId(std::move(value)); return *this;}

    /**
     * The input ID of the secondary input in the automatic input failover pair.
     */
    inline AutomaticInputFailoverSettings& WithSecondaryInputId(const char* value) { SetSecondaryInputId(value); return *this;}

  private:

    InputPreference m_inputPreference;
    bool m_inputPreferenceHasBeenSet;

    Aws::String m_secondaryInputId;
    bool m_secondaryInputIdHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
