﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The assigned environment when a worker exits a session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssignedEnvironmentExitSessionActionDefinition">AWS
   * API Reference</a></p>
   */
  class AssignedEnvironmentExitSessionActionDefinition
  {
  public:
    AWS_DEADLINE_API AssignedEnvironmentExitSessionActionDefinition();
    AWS_DEADLINE_API AssignedEnvironmentExitSessionActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AssignedEnvironmentExitSessionActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment ID of the assigned environment when exiting a session.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline AssignedEnvironmentExitSessionActionDefinition& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline AssignedEnvironmentExitSessionActionDefinition& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline AssignedEnvironmentExitSessionActionDefinition& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
