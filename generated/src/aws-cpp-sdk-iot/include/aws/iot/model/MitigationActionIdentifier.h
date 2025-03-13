/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information that identifies a mitigation action. This information is returned
   * by ListMitigationActions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MitigationActionIdentifier">AWS
   * API Reference</a></p>
   */
  class MitigationActionIdentifier
  {
  public:
    AWS_IOT_API MitigationActionIdentifier() = default;
    AWS_IOT_API MitigationActionIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MitigationActionIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The friendly name of the mitigation action.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    MitigationActionIdentifier& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN used to apply this mitigation action.</p>
     */
    inline const Aws::String& GetActionArn() const { return m_actionArn; }
    inline bool ActionArnHasBeenSet() const { return m_actionArnHasBeenSet; }
    template<typename ActionArnT = Aws::String>
    void SetActionArn(ActionArnT&& value) { m_actionArnHasBeenSet = true; m_actionArn = std::forward<ActionArnT>(value); }
    template<typename ActionArnT = Aws::String>
    MitigationActionIdentifier& WithActionArn(ActionArnT&& value) { SetActionArn(std::forward<ActionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when this mitigation action was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    MitigationActionIdentifier& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_actionArn;
    bool m_actionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
