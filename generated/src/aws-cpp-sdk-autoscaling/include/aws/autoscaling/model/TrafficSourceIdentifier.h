/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes the identifier of a traffic source.</p> <p>Currently, you must
   * specify an Amazon Resource Name (ARN) for an existing VPC Lattice target
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TrafficSourceIdentifier">AWS
   * API Reference</a></p>
   */
  class TrafficSourceIdentifier
  {
  public:
    AWS_AUTOSCALING_API TrafficSourceIdentifier();
    AWS_AUTOSCALING_API TrafficSourceIdentifier(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API TrafficSourceIdentifier& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline TrafficSourceIdentifier& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline TrafficSourceIdentifier& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline TrafficSourceIdentifier& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
