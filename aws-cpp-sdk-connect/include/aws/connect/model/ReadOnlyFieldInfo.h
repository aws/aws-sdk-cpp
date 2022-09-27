﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TaskTemplateFieldIdentifier.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Indicates a field that is read-only to an agent.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReadOnlyFieldInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API ReadOnlyFieldInfo
  {
  public:
    ReadOnlyFieldInfo();
    ReadOnlyFieldInfo(Aws::Utils::Json::JsonView jsonValue);
    ReadOnlyFieldInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the read-only field.</p>
     */
    inline const TaskTemplateFieldIdentifier& GetId() const{ return m_id; }

    /**
     * <p>Identifier of the read-only field.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Identifier of the read-only field.</p>
     */
    inline void SetId(const TaskTemplateFieldIdentifier& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Identifier of the read-only field.</p>
     */
    inline void SetId(TaskTemplateFieldIdentifier&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Identifier of the read-only field.</p>
     */
    inline ReadOnlyFieldInfo& WithId(const TaskTemplateFieldIdentifier& value) { SetId(value); return *this;}

    /**
     * <p>Identifier of the read-only field.</p>
     */
    inline ReadOnlyFieldInfo& WithId(TaskTemplateFieldIdentifier&& value) { SetId(std::move(value)); return *this;}

  private:

    TaskTemplateFieldIdentifier m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
