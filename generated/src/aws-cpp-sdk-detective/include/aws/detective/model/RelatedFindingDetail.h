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


    /**
     * <p>The Amazon Resource Name (ARN) of the related finding.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the related finding.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the related finding.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the related finding.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the related finding.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the related finding.</p>
     */
    inline RelatedFindingDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the related finding.</p>
     */
    inline RelatedFindingDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the related finding.</p>
     */
    inline RelatedFindingDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of finding.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of finding.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of finding.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of finding.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of finding.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of finding.</p>
     */
    inline RelatedFindingDetail& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of finding.</p>
     */
    inline RelatedFindingDetail& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of finding.</p>
     */
    inline RelatedFindingDetail& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The IP address of the finding.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of the finding.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address of the finding.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of the finding.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address of the finding.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address of the finding.</p>
     */
    inline RelatedFindingDetail& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address of the finding.</p>
     */
    inline RelatedFindingDetail& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the finding.</p>
     */
    inline RelatedFindingDetail& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

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
