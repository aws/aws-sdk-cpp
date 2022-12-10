/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Stage.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>The stages that an escalation plan or engagement plan engages contacts and
   * contact methods in.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Plan">AWS
   * API Reference</a></p>
   */
  class Plan
  {
  public:
    AWS_SSMCONTACTS_API Plan();
    AWS_SSMCONTACTS_API Plan(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Plan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of stages that the escalation plan or engagement plan uses to engage
     * contacts and contact methods.</p>
     */
    inline const Aws::Vector<Stage>& GetStages() const{ return m_stages; }

    /**
     * <p>A list of stages that the escalation plan or engagement plan uses to engage
     * contacts and contact methods.</p>
     */
    inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }

    /**
     * <p>A list of stages that the escalation plan or engagement plan uses to engage
     * contacts and contact methods.</p>
     */
    inline void SetStages(const Aws::Vector<Stage>& value) { m_stagesHasBeenSet = true; m_stages = value; }

    /**
     * <p>A list of stages that the escalation plan or engagement plan uses to engage
     * contacts and contact methods.</p>
     */
    inline void SetStages(Aws::Vector<Stage>&& value) { m_stagesHasBeenSet = true; m_stages = std::move(value); }

    /**
     * <p>A list of stages that the escalation plan or engagement plan uses to engage
     * contacts and contact methods.</p>
     */
    inline Plan& WithStages(const Aws::Vector<Stage>& value) { SetStages(value); return *this;}

    /**
     * <p>A list of stages that the escalation plan or engagement plan uses to engage
     * contacts and contact methods.</p>
     */
    inline Plan& WithStages(Aws::Vector<Stage>&& value) { SetStages(std::move(value)); return *this;}

    /**
     * <p>A list of stages that the escalation plan or engagement plan uses to engage
     * contacts and contact methods.</p>
     */
    inline Plan& AddStages(const Stage& value) { m_stagesHasBeenSet = true; m_stages.push_back(value); return *this; }

    /**
     * <p>A list of stages that the escalation plan or engagement plan uses to engage
     * contacts and contact methods.</p>
     */
    inline Plan& AddStages(Stage&& value) { m_stagesHasBeenSet = true; m_stages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Stage> m_stages;
    bool m_stagesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
