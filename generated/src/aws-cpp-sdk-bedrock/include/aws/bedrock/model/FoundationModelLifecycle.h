/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/FoundationModelLifecycleStatus.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Details about whether a model version is available or
   * deprecated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/FoundationModelLifecycle">AWS
   * API Reference</a></p>
   */
  class FoundationModelLifecycle
  {
  public:
    AWS_BEDROCK_API FoundationModelLifecycle();
    AWS_BEDROCK_API FoundationModelLifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API FoundationModelLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether a model version is available (<code>ACTIVE</code>) or
     * deprecated (<code>LEGACY</code>.</p>
     */
    inline const FoundationModelLifecycleStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies whether a model version is available (<code>ACTIVE</code>) or
     * deprecated (<code>LEGACY</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies whether a model version is available (<code>ACTIVE</code>) or
     * deprecated (<code>LEGACY</code>.</p>
     */
    inline void SetStatus(const FoundationModelLifecycleStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies whether a model version is available (<code>ACTIVE</code>) or
     * deprecated (<code>LEGACY</code>.</p>
     */
    inline void SetStatus(FoundationModelLifecycleStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies whether a model version is available (<code>ACTIVE</code>) or
     * deprecated (<code>LEGACY</code>.</p>
     */
    inline FoundationModelLifecycle& WithStatus(const FoundationModelLifecycleStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies whether a model version is available (<code>ACTIVE</code>) or
     * deprecated (<code>LEGACY</code>.</p>
     */
    inline FoundationModelLifecycle& WithStatus(FoundationModelLifecycleStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    FoundationModelLifecycleStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
