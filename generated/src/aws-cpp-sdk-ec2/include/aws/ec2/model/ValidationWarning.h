/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ValidationError.h>
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
   * <p>The error codes and error messages that are returned for the parameters or
   * parameter combinations that are not valid when a new launch template or new
   * version of a launch template is created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ValidationWarning">AWS
   * API Reference</a></p>
   */
  class ValidationWarning
  {
  public:
    AWS_EC2_API ValidationWarning();
    AWS_EC2_API ValidationWarning(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ValidationWarning& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The error codes and error messages.</p>
     */
    inline const Aws::Vector<ValidationError>& GetErrors() const{ return m_errors; }

    /**
     * <p>The error codes and error messages.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>The error codes and error messages.</p>
     */
    inline void SetErrors(const Aws::Vector<ValidationError>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>The error codes and error messages.</p>
     */
    inline void SetErrors(Aws::Vector<ValidationError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>The error codes and error messages.</p>
     */
    inline ValidationWarning& WithErrors(const Aws::Vector<ValidationError>& value) { SetErrors(value); return *this;}

    /**
     * <p>The error codes and error messages.</p>
     */
    inline ValidationWarning& WithErrors(Aws::Vector<ValidationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The error codes and error messages.</p>
     */
    inline ValidationWarning& AddErrors(const ValidationError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>The error codes and error messages.</p>
     */
    inline ValidationWarning& AddErrors(ValidationError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ValidationError> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
