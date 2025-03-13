/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/AnalysisResultLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/AnalysisResultLocation.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains the result of the analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AnalysisResult">AWS
   * API Reference</a></p>
   */
  class AnalysisResult
  {
  public:
    AWS_IOTEVENTS_API AnalysisResult() = default;
    AWS_IOTEVENTS_API AnalysisResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AnalysisResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the analysis result. Analyses fall into the following types based
     * on the validators used to generate the analysis result:</p> <ul> <li> <p>
     * <code>supported-actions</code> - You must specify AWS IoT Events supported
     * actions that work with other AWS services in a supported AWS Region.</p> </li>
     * <li> <p> <code>service-limits</code> - Resources or API operations can't exceed
     * service quotas (also known as limits). Update your detector model or request a
     * quota increase.</p> </li> <li> <p> <code>structure</code> - The detector model
     * must follow a structure that AWS IoT Events supports. </p> </li> <li> <p>
     * <code>expression-syntax</code> - Your expression must follow the required
     * syntax.</p> </li> <li> <p> <code>data-type</code> - Data types referenced in the
     * detector model must be compatible.</p> </li> <li> <p>
     * <code>referenced-data</code> - You must define the data referenced in your
     * detector model before you can use the data.</p> </li> <li> <p>
     * <code>referenced-resource</code> - Resources that the detector model uses must
     * be available.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/iotevents/latest/developerguide/iotevents-analyze-api.html">Running
     * detector model analyses</a> in the <i>AWS IoT Events Developer Guide</i>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AnalysisResult& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level of the analysis result. Based on the severity level,
     * analysis results fall into three general categories:</p> <ul> <li> <p>
     * <code>INFO</code> - An information result tells you about a significant field in
     * your detector model. This type of result usually doesn't require immediate
     * action.</p> </li> <li> <p> <code>WARNING</code> - A warning result draws special
     * attention to fields that might cause issues for your detector model. We
     * recommend that you review warnings and take necessary actions before you use
     * your detector model in production environments. Otherwise, the detector model
     * might not work as expected.</p> </li> <li> <p> <code>ERROR</code> - An error
     * result notifies you about a problem found in your detector model. You must fix
     * all errors before you can publish your detector model.</p> </li> </ul>
     */
    inline AnalysisResultLevel GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(AnalysisResultLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline AnalysisResult& WithLevel(AnalysisResultLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains additional information about the analysis result.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AnalysisResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains one or more locations that you can use to locate the fields in your
     * detector model that the analysis result references.</p>
     */
    inline const Aws::Vector<AnalysisResultLocation>& GetLocations() const { return m_locations; }
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }
    template<typename LocationsT = Aws::Vector<AnalysisResultLocation>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<AnalysisResultLocation>>
    AnalysisResult& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = AnalysisResultLocation>
    AnalysisResult& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    AnalysisResultLevel m_level{AnalysisResultLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<AnalysisResultLocation> m_locations;
    bool m_locationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
