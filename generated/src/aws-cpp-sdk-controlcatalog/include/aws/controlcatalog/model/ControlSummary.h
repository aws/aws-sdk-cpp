/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/ControlBehavior.h>
#include <aws/controlcatalog/model/ControlSeverity.h>
#include <aws/controlcatalog/model/ImplementationSummary.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>Overview of information about a control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ControlSummary">AWS
   * API Reference</a></p>
   */
  class ControlSummary
  {
  public:
    AWS_CONTROLCATALOG_API ControlSummary() = default;
    AWS_CONTROLCATALOG_API ControlSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ControlSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the control.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ControlSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the control.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ControlSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the control, as it may appear in the console. Describes the
     * functionality of the control.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ControlSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumerated type, with the following possible values:</p>
     */
    inline ControlBehavior GetBehavior() const { return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    inline void SetBehavior(ControlBehavior value) { m_behaviorHasBeenSet = true; m_behavior = value; }
    inline ControlSummary& WithBehavior(ControlBehavior value) { SetBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enumerated type, with the following possible values:</p>
     */
    inline ControlSeverity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(ControlSeverity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline ControlSummary& WithSeverity(ControlSeverity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object of type <code>ImplementationSummary</code> that describes how the
     * control is implemented.</p>
     */
    inline const ImplementationSummary& GetImplementation() const { return m_implementation; }
    inline bool ImplementationHasBeenSet() const { return m_implementationHasBeenSet; }
    template<typename ImplementationT = ImplementationSummary>
    void SetImplementation(ImplementationT&& value) { m_implementationHasBeenSet = true; m_implementation = std::forward<ImplementationT>(value); }
    template<typename ImplementationT = ImplementationSummary>
    ControlSummary& WithImplementation(ImplementationT&& value) { SetImplementation(std::forward<ImplementationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that notes the time when the control was released (start of its
     * life) as a governance capability in Amazon Web Services.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    ControlSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ControlBehavior m_behavior{ControlBehavior::NOT_SET};
    bool m_behaviorHasBeenSet = false;

    ControlSeverity m_severity{ControlSeverity::NOT_SET};
    bool m_severityHasBeenSet = false;

    ImplementationSummary m_implementation;
    bool m_implementationHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
