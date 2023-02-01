/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DeleteFleetError.h>
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
   * <p>Describes an EC2 Fleet that was not successfully deleted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFleetErrorItem">AWS
   * API Reference</a></p>
   */
  class DeleteFleetErrorItem
  {
  public:
    AWS_EC2_API DeleteFleetErrorItem();
    AWS_EC2_API DeleteFleetErrorItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DeleteFleetErrorItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The error.</p>
     */
    inline const DeleteFleetError& GetError() const{ return m_error; }

    /**
     * <p>The error.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The error.</p>
     */
    inline void SetError(const DeleteFleetError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error.</p>
     */
    inline void SetError(DeleteFleetError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error.</p>
     */
    inline DeleteFleetErrorItem& WithError(const DeleteFleetError& value) { SetError(value); return *this;}

    /**
     * <p>The error.</p>
     */
    inline DeleteFleetErrorItem& WithError(DeleteFleetError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline DeleteFleetErrorItem& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline DeleteFleetErrorItem& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline DeleteFleetErrorItem& WithFleetId(const char* value) { SetFleetId(value); return *this;}

  private:

    DeleteFleetError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
