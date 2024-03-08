/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Contains details on the configuration of a table optimizer. You pass this
   * configuration when creating or updating a table optimizer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableOptimizerConfiguration">AWS
   * API Reference</a></p>
   */
  class TableOptimizerConfiguration
  {
  public:
    AWS_GLUE_API TableOptimizerConfiguration();
    AWS_GLUE_API TableOptimizerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableOptimizerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline TableOptimizerConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline TableOptimizerConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>A role passed by the caller which gives the service permission to update the
     * resources associated with the optimizer on the caller's behalf.</p>
     */
    inline TableOptimizerConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Whether table optimization is enabled. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether table optimization is enabled. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether table optimization is enabled. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether table optimization is enabled. </p>
     */
    inline TableOptimizerConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
