/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ContactFlowType.h>
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
   * <p>Contains summary information about a contact flow.</p> <p>You can also create
   * and update contact flows using the <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon
   * Connect Flow language</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API ContactFlowSummary
  {
  public:
    ContactFlowSummary();
    ContactFlowSummary(Aws::Utils::Json::JsonView jsonValue);
    ContactFlowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline ContactFlowSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline ContactFlowSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact flow.</p>
     */
    inline ContactFlowSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow.</p>
     */
    inline ContactFlowSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow.</p>
     */
    inline ContactFlowSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact flow.</p>
     */
    inline ContactFlowSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the contact flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the contact flow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the contact flow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the contact flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the contact flow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the contact flow.</p>
     */
    inline ContactFlowSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contact flow.</p>
     */
    inline ContactFlowSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contact flow.</p>
     */
    inline ContactFlowSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of contact flow.</p>
     */
    inline const ContactFlowType& GetContactFlowType() const{ return m_contactFlowType; }

    /**
     * <p>The type of contact flow.</p>
     */
    inline bool ContactFlowTypeHasBeenSet() const { return m_contactFlowTypeHasBeenSet; }

    /**
     * <p>The type of contact flow.</p>
     */
    inline void SetContactFlowType(const ContactFlowType& value) { m_contactFlowTypeHasBeenSet = true; m_contactFlowType = value; }

    /**
     * <p>The type of contact flow.</p>
     */
    inline void SetContactFlowType(ContactFlowType&& value) { m_contactFlowTypeHasBeenSet = true; m_contactFlowType = std::move(value); }

    /**
     * <p>The type of contact flow.</p>
     */
    inline ContactFlowSummary& WithContactFlowType(const ContactFlowType& value) { SetContactFlowType(value); return *this;}

    /**
     * <p>The type of contact flow.</p>
     */
    inline ContactFlowSummary& WithContactFlowType(ContactFlowType&& value) { SetContactFlowType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ContactFlowType m_contactFlowType;
    bool m_contactFlowTypeHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
