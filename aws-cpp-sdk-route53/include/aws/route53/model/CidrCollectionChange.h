/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/CidrCollectionChangeAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the CIDR collection
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CidrCollectionChange">AWS
   * API Reference</a></p>
   */
  class CidrCollectionChange
  {
  public:
    AWS_ROUTE53_API CidrCollectionChange();
    AWS_ROUTE53_API CidrCollectionChange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API CidrCollectionChange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Name of the location that is associated with the CIDR collection.</p>
     */
    inline const Aws::String& GetLocationName() const{ return m_locationName; }

    /**
     * <p>Name of the location that is associated with the CIDR collection.</p>
     */
    inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }

    /**
     * <p>Name of the location that is associated with the CIDR collection.</p>
     */
    inline void SetLocationName(const Aws::String& value) { m_locationNameHasBeenSet = true; m_locationName = value; }

    /**
     * <p>Name of the location that is associated with the CIDR collection.</p>
     */
    inline void SetLocationName(Aws::String&& value) { m_locationNameHasBeenSet = true; m_locationName = std::move(value); }

    /**
     * <p>Name of the location that is associated with the CIDR collection.</p>
     */
    inline void SetLocationName(const char* value) { m_locationNameHasBeenSet = true; m_locationName.assign(value); }

    /**
     * <p>Name of the location that is associated with the CIDR collection.</p>
     */
    inline CidrCollectionChange& WithLocationName(const Aws::String& value) { SetLocationName(value); return *this;}

    /**
     * <p>Name of the location that is associated with the CIDR collection.</p>
     */
    inline CidrCollectionChange& WithLocationName(Aws::String&& value) { SetLocationName(std::move(value)); return *this;}

    /**
     * <p>Name of the location that is associated with the CIDR collection.</p>
     */
    inline CidrCollectionChange& WithLocationName(const char* value) { SetLocationName(value); return *this;}


    /**
     * <p>CIDR collection change action. </p>
     */
    inline const CidrCollectionChangeAction& GetAction() const{ return m_action; }

    /**
     * <p>CIDR collection change action. </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>CIDR collection change action. </p>
     */
    inline void SetAction(const CidrCollectionChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>CIDR collection change action. </p>
     */
    inline void SetAction(CidrCollectionChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>CIDR collection change action. </p>
     */
    inline CidrCollectionChange& WithAction(const CidrCollectionChangeAction& value) { SetAction(value); return *this;}

    /**
     * <p>CIDR collection change action. </p>
     */
    inline CidrCollectionChange& WithAction(CidrCollectionChangeAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>List of CIDR blocks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrList() const{ return m_cidrList; }

    /**
     * <p>List of CIDR blocks.</p>
     */
    inline bool CidrListHasBeenSet() const { return m_cidrListHasBeenSet; }

    /**
     * <p>List of CIDR blocks.</p>
     */
    inline void SetCidrList(const Aws::Vector<Aws::String>& value) { m_cidrListHasBeenSet = true; m_cidrList = value; }

    /**
     * <p>List of CIDR blocks.</p>
     */
    inline void SetCidrList(Aws::Vector<Aws::String>&& value) { m_cidrListHasBeenSet = true; m_cidrList = std::move(value); }

    /**
     * <p>List of CIDR blocks.</p>
     */
    inline CidrCollectionChange& WithCidrList(const Aws::Vector<Aws::String>& value) { SetCidrList(value); return *this;}

    /**
     * <p>List of CIDR blocks.</p>
     */
    inline CidrCollectionChange& WithCidrList(Aws::Vector<Aws::String>&& value) { SetCidrList(std::move(value)); return *this;}

    /**
     * <p>List of CIDR blocks.</p>
     */
    inline CidrCollectionChange& AddCidrList(const Aws::String& value) { m_cidrListHasBeenSet = true; m_cidrList.push_back(value); return *this; }

    /**
     * <p>List of CIDR blocks.</p>
     */
    inline CidrCollectionChange& AddCidrList(Aws::String&& value) { m_cidrListHasBeenSet = true; m_cidrList.push_back(std::move(value)); return *this; }

    /**
     * <p>List of CIDR blocks.</p>
     */
    inline CidrCollectionChange& AddCidrList(const char* value) { m_cidrListHasBeenSet = true; m_cidrList.push_back(value); return *this; }

  private:

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;

    CidrCollectionChangeAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrList;
    bool m_cidrListHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
