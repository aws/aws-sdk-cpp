/**
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
   * <p>The details of the worker amount capability.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/WorkerAmountCapability">AWS
   * API Reference</a></p>
   */
  class WorkerAmountCapability
  {
  public:
    AWS_DEADLINE_API WorkerAmountCapability();
    AWS_DEADLINE_API WorkerAmountCapability(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API WorkerAmountCapability& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the worker amount capability.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the worker amount capability.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the worker amount capability.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the worker amount capability.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the worker amount capability.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the worker amount capability.</p>
     */
    inline WorkerAmountCapability& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the worker amount capability.</p>
     */
    inline WorkerAmountCapability& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the worker amount capability.</p>
     */
    inline WorkerAmountCapability& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the worker amount capability.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the worker amount capability.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the worker amount capability.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the worker amount capability.</p>
     */
    inline WorkerAmountCapability& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
