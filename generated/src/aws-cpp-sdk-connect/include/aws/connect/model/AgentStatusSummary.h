/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AgentStatusType.h>
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
   * <p>Summary information for an agent status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentStatusSummary">AWS
   * API Reference</a></p>
   */
  class AgentStatusSummary
  {
  public:
    AWS_CONNECT_API AgentStatusSummary();
    AWS_CONNECT_API AgentStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for an agent status.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for an agent status.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for an agent status.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for an agent status.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for an agent status.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for an agent status.</p>
     */
    inline AgentStatusSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for an agent status.</p>
     */
    inline AgentStatusSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for an agent status.</p>
     */
    inline AgentStatusSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the agent status.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the agent status.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the agent status.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the agent status.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the agent status.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the agent status.</p>
     */
    inline AgentStatusSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the agent status.</p>
     */
    inline AgentStatusSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the agent status.</p>
     */
    inline AgentStatusSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the agent status.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the agent status.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the agent status.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the agent status.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the agent status.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the agent status.</p>
     */
    inline AgentStatusSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the agent status.</p>
     */
    inline AgentStatusSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the agent status.</p>
     */
    inline AgentStatusSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the agent status.</p>
     */
    inline const AgentStatusType& GetType() const{ return m_type; }

    /**
     * <p>The type of the agent status.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the agent status.</p>
     */
    inline void SetType(const AgentStatusType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the agent status.</p>
     */
    inline void SetType(AgentStatusType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the agent status.</p>
     */
    inline AgentStatusSummary& WithType(const AgentStatusType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the agent status.</p>
     */
    inline AgentStatusSummary& WithType(AgentStatusType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AgentStatusType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
