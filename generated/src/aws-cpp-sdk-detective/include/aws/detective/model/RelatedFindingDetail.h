/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details related activities associated with a potential security event. Lists
   * all distinct categories of evidence that are connected to the resource or the
   * finding group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/RelatedFindingDetail">AWS
   * API Reference</a></p>
   */
  class RelatedFindingDetail
  {
  public:
    AWS_DETECTIVE_API RelatedFindingDetail();
    AWS_DETECTIVE_API RelatedFindingDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API RelatedFindingDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the related finding.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RelatedFindingDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RelatedFindingDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RelatedFindingDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of finding.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline RelatedFindingDetail& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline RelatedFindingDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline RelatedFindingDetail& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the finding.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }
    inline RelatedFindingDetail& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}
    inline RelatedFindingDetail& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}
    inline RelatedFindingDetail& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
