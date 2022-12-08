/**
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
   * <p>Information about a required field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RequiredFieldInfo">AWS
   * API Reference</a></p>
   */
  class RequiredFieldInfo
  {
  public:
    AWS_CONNECT_API RequiredFieldInfo();
    AWS_CONNECT_API RequiredFieldInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RequiredFieldInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the field.</p>
     */
    inline const TaskTemplateFieldIdentifier& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline void SetId(const TaskTemplateFieldIdentifier& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline void SetId(TaskTemplateFieldIdentifier&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline RequiredFieldInfo& WithId(const TaskTemplateFieldIdentifier& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the field.</p>
     */
    inline RequiredFieldInfo& WithId(TaskTemplateFieldIdentifier&& value) { SetId(std::move(value)); return *this;}

  private:

    TaskTemplateFieldIdentifier m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
