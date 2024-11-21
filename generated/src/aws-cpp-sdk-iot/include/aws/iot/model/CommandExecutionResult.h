﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The result value of the command execution. The device can use the result
   * field to share additional details about the execution such as a return value of
   * a remote function call.</p>  <p>This field is not applicable if you use
   * the <code>AWS-IoT-FleetWise</code> namespace.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandExecutionResult">AWS
   * API Reference</a></p>
   */
  class CommandExecutionResult
  {
  public:
    AWS_IOT_API CommandExecutionResult();
    AWS_IOT_API CommandExecutionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CommandExecutionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An attribute of type String. For example:</p> <p> <code>"S": "Hello"</code>
     * </p>
     */
    inline const Aws::String& GetS() const{ return m_s; }
    inline bool SHasBeenSet() const { return m_sHasBeenSet; }
    inline void SetS(const Aws::String& value) { m_sHasBeenSet = true; m_s = value; }
    inline void SetS(Aws::String&& value) { m_sHasBeenSet = true; m_s = std::move(value); }
    inline void SetS(const char* value) { m_sHasBeenSet = true; m_s.assign(value); }
    inline CommandExecutionResult& WithS(const Aws::String& value) { SetS(value); return *this;}
    inline CommandExecutionResult& WithS(Aws::String&& value) { SetS(std::move(value)); return *this;}
    inline CommandExecutionResult& WithS(const char* value) { SetS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Boolean. For example:</p> <p> <code>"BOOL": true</code>
     * </p>
     */
    inline bool GetB() const{ return m_b; }
    inline bool BHasBeenSet() const { return m_bHasBeenSet; }
    inline void SetB(bool value) { m_bHasBeenSet = true; m_b = value; }
    inline CommandExecutionResult& WithB(bool value) { SetB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute of type Binary.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBIN() const{ return m_bIN; }
    inline bool BINHasBeenSet() const { return m_bINHasBeenSet; }
    inline void SetBIN(const Aws::Utils::ByteBuffer& value) { m_bINHasBeenSet = true; m_bIN = value; }
    inline void SetBIN(Aws::Utils::ByteBuffer&& value) { m_bINHasBeenSet = true; m_bIN = std::move(value); }
    inline CommandExecutionResult& WithBIN(const Aws::Utils::ByteBuffer& value) { SetBIN(value); return *this;}
    inline CommandExecutionResult& WithBIN(Aws::Utils::ByteBuffer&& value) { SetBIN(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_s;
    bool m_sHasBeenSet = false;

    bool m_b;
    bool m_bHasBeenSet = false;

    Aws::Utils::ByteBuffer m_bIN;
    bool m_bINHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
