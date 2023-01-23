/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/QuickConnectType.h>
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
   * <p>Contains summary information about a quick connect.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QuickConnectSummary">AWS
   * API Reference</a></p>
   */
  class QuickConnectSummary
  {
  public:
    AWS_CONNECT_API QuickConnectSummary();
    AWS_CONNECT_API QuickConnectSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API QuickConnectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline QuickConnectSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline QuickConnectSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the quick connect.</p>
     */
    inline QuickConnectSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline QuickConnectSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline QuickConnectSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the quick connect.</p>
     */
    inline QuickConnectSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the quick connect.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the quick connect.</p>
     */
    inline QuickConnectSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the quick connect.</p>
     */
    inline QuickConnectSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the quick connect.</p>
     */
    inline QuickConnectSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline const QuickConnectType& GetQuickConnectType() const{ return m_quickConnectType; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline bool QuickConnectTypeHasBeenSet() const { return m_quickConnectTypeHasBeenSet; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline void SetQuickConnectType(const QuickConnectType& value) { m_quickConnectTypeHasBeenSet = true; m_quickConnectType = value; }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline void SetQuickConnectType(QuickConnectType&& value) { m_quickConnectTypeHasBeenSet = true; m_quickConnectType = std::move(value); }

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline QuickConnectSummary& WithQuickConnectType(const QuickConnectType& value) { SetQuickConnectType(value); return *this;}

    /**
     * <p>The type of quick connect. In the Amazon Connect console, when you create a
     * quick connect, you are prompted to assign one of the following types: Agent
     * (USER), External (PHONE_NUMBER), or Queue (QUEUE).</p>
     */
    inline QuickConnectSummary& WithQuickConnectType(QuickConnectType&& value) { SetQuickConnectType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    QuickConnectType m_quickConnectType;
    bool m_quickConnectTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
