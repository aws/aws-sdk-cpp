﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowModuleState.h>
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
   * <p>Contains summary information about a contact flow.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowModuleSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API ContactFlowModuleSummary
  {
  public:
    ContactFlowModuleSummary();
    ContactFlowModuleSummary(Aws::Utils::Json::JsonView jsonValue);
    ContactFlowModuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the contact flow module.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the contact flow module.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the contact flow module.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the contact flow module.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the contact flow module.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow module.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow module.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow module.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow module.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow module.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the contact flow module.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the contact flow module.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the contact flow module.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the contact flow module.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the contact flow module.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of contact flow module.</p>
     */
    inline const ContactFlowModuleState& GetState() const{ return m_state; }

    /**
     * <p>The type of contact flow module.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The type of contact flow module.</p>
     */
    inline void SetState(const ContactFlowModuleState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The type of contact flow module.</p>
     */
    inline void SetState(ContactFlowModuleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The type of contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithState(const ContactFlowModuleState& value) { SetState(value); return *this;}

    /**
     * <p>The type of contact flow module.</p>
     */
    inline ContactFlowModuleSummary& WithState(ContactFlowModuleState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ContactFlowModuleState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
