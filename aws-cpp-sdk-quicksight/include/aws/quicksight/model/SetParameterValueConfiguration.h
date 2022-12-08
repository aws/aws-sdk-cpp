/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DestinationParameterValueConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of adding parameters in action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SetParameterValueConfiguration">AWS
   * API Reference</a></p>
   */
  class SetParameterValueConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SetParameterValueConfiguration();
    AWS_QUICKSIGHT_API SetParameterValueConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SetParameterValueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The destination parameter name of the
     * <code>SetParameterValueConfiguration</code>.</p>
     */
    inline const Aws::String& GetDestinationParameterName() const{ return m_destinationParameterName; }

    /**
     * <p>The destination parameter name of the
     * <code>SetParameterValueConfiguration</code>.</p>
     */
    inline bool DestinationParameterNameHasBeenSet() const { return m_destinationParameterNameHasBeenSet; }

    /**
     * <p>The destination parameter name of the
     * <code>SetParameterValueConfiguration</code>.</p>
     */
    inline void SetDestinationParameterName(const Aws::String& value) { m_destinationParameterNameHasBeenSet = true; m_destinationParameterName = value; }

    /**
     * <p>The destination parameter name of the
     * <code>SetParameterValueConfiguration</code>.</p>
     */
    inline void SetDestinationParameterName(Aws::String&& value) { m_destinationParameterNameHasBeenSet = true; m_destinationParameterName = std::move(value); }

    /**
     * <p>The destination parameter name of the
     * <code>SetParameterValueConfiguration</code>.</p>
     */
    inline void SetDestinationParameterName(const char* value) { m_destinationParameterNameHasBeenSet = true; m_destinationParameterName.assign(value); }

    /**
     * <p>The destination parameter name of the
     * <code>SetParameterValueConfiguration</code>.</p>
     */
    inline SetParameterValueConfiguration& WithDestinationParameterName(const Aws::String& value) { SetDestinationParameterName(value); return *this;}

    /**
     * <p>The destination parameter name of the
     * <code>SetParameterValueConfiguration</code>.</p>
     */
    inline SetParameterValueConfiguration& WithDestinationParameterName(Aws::String&& value) { SetDestinationParameterName(std::move(value)); return *this;}

    /**
     * <p>The destination parameter name of the
     * <code>SetParameterValueConfiguration</code>.</p>
     */
    inline SetParameterValueConfiguration& WithDestinationParameterName(const char* value) { SetDestinationParameterName(value); return *this;}


    
    inline const DestinationParameterValueConfiguration& GetValue() const{ return m_value; }

    
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    
    inline void SetValue(const DestinationParameterValueConfiguration& value) { m_valueHasBeenSet = true; m_value = value; }

    
    inline void SetValue(DestinationParameterValueConfiguration&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    
    inline SetParameterValueConfiguration& WithValue(const DestinationParameterValueConfiguration& value) { SetValue(value); return *this;}

    
    inline SetParameterValueConfiguration& WithValue(DestinationParameterValueConfiguration&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_destinationParameterName;
    bool m_destinationParameterNameHasBeenSet = false;

    DestinationParameterValueConfiguration m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
