/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>A multicast group that is associated with a FUOTA task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/MulticastGroupByFuotaTask">AWS
   * API Reference</a></p>
   */
  class MulticastGroupByFuotaTask
  {
  public:
    AWS_IOTWIRELESS_API MulticastGroupByFuotaTask();
    AWS_IOTWIRELESS_API MulticastGroupByFuotaTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API MulticastGroupByFuotaTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline MulticastGroupByFuotaTask& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline MulticastGroupByFuotaTask& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline MulticastGroupByFuotaTask& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
