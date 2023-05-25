/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the Inference accelerators for the instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InferenceDeviceInfo">AWS
   * API Reference</a></p>
   */
  class InferenceDeviceInfo
  {
  public:
    AWS_EC2_API InferenceDeviceInfo();
    AWS_EC2_API InferenceDeviceInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InferenceDeviceInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of Inference accelerators for the instance type.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of Inference accelerators for the instance type.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of Inference accelerators for the instance type.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of Inference accelerators for the instance type.</p>
     */
    inline InferenceDeviceInfo& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The name of the Inference accelerator.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Inference accelerator.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Inference accelerator.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Inference accelerator.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Inference accelerator.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Inference accelerator.</p>
     */
    inline InferenceDeviceInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Inference accelerator.</p>
     */
    inline InferenceDeviceInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Inference accelerator.</p>
     */
    inline InferenceDeviceInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The manufacturer of the Inference accelerator.</p>
     */
    inline const Aws::String& GetManufacturer() const{ return m_manufacturer; }

    /**
     * <p>The manufacturer of the Inference accelerator.</p>
     */
    inline bool ManufacturerHasBeenSet() const { return m_manufacturerHasBeenSet; }

    /**
     * <p>The manufacturer of the Inference accelerator.</p>
     */
    inline void SetManufacturer(const Aws::String& value) { m_manufacturerHasBeenSet = true; m_manufacturer = value; }

    /**
     * <p>The manufacturer of the Inference accelerator.</p>
     */
    inline void SetManufacturer(Aws::String&& value) { m_manufacturerHasBeenSet = true; m_manufacturer = std::move(value); }

    /**
     * <p>The manufacturer of the Inference accelerator.</p>
     */
    inline void SetManufacturer(const char* value) { m_manufacturerHasBeenSet = true; m_manufacturer.assign(value); }

    /**
     * <p>The manufacturer of the Inference accelerator.</p>
     */
    inline InferenceDeviceInfo& WithManufacturer(const Aws::String& value) { SetManufacturer(value); return *this;}

    /**
     * <p>The manufacturer of the Inference accelerator.</p>
     */
    inline InferenceDeviceInfo& WithManufacturer(Aws::String&& value) { SetManufacturer(std::move(value)); return *this;}

    /**
     * <p>The manufacturer of the Inference accelerator.</p>
     */
    inline InferenceDeviceInfo& WithManufacturer(const char* value) { SetManufacturer(value); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_manufacturer;
    bool m_manufacturerHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
