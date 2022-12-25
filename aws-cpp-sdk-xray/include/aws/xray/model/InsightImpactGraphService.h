/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/InsightImpactGraphEdge.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Information about an application that processed requests, users that made
   * requests, or downstream services, resources, and applications that an
   * application used. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/InsightImpactGraphService">AWS
   * API Reference</a></p>
   */
  class InsightImpactGraphService
  {
  public:
    AWS_XRAY_API InsightImpactGraphService();
    AWS_XRAY_API InsightImpactGraphService(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API InsightImpactGraphService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline int GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline void SetReferenceId(int value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>Identifier for the service. Unique within the service map.</p>
     */
    inline InsightImpactGraphService& WithReferenceId(int value) { SetReferenceId(value); return *this;}


    /**
     * <p>Identifier for the service. Unique within the service map.</p> <ul> <li>
     * <p>Amazon Web Services Resource - The type of an Amazon Web Services resource.
     * For example, AWS::EC2::Instance for an application running on Amazon EC2 or
     * AWS::DynamoDB::Table for an Amazon DynamoDB table that the application used.
     * </p> </li> <li> <p>Amazon Web Services Service - The type of an Amazon Web
     * Services service. For example, AWS::DynamoDB for downstream calls to Amazon
     * DynamoDB that didn't target a specific table. </p> </li> <li> <p>Amazon Web
     * Services Service - The type of an Amazon Web Services service. For example,
     * AWS::DynamoDB for downstream calls to Amazon DynamoDB that didn't target a
     * specific table. </p> </li> <li> <p>remote - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Identifier for the service. Unique within the service map.</p> <ul> <li>
     * <p>Amazon Web Services Resource - The type of an Amazon Web Services resource.
     * For example, AWS::EC2::Instance for an application running on Amazon EC2 or
     * AWS::DynamoDB::Table for an Amazon DynamoDB table that the application used.
     * </p> </li> <li> <p>Amazon Web Services Service - The type of an Amazon Web
     * Services service. For example, AWS::DynamoDB for downstream calls to Amazon
     * DynamoDB that didn't target a specific table. </p> </li> <li> <p>Amazon Web
     * Services Service - The type of an Amazon Web Services service. For example,
     * AWS::DynamoDB for downstream calls to Amazon DynamoDB that didn't target a
     * specific table. </p> </li> <li> <p>remote - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Identifier for the service. Unique within the service map.</p> <ul> <li>
     * <p>Amazon Web Services Resource - The type of an Amazon Web Services resource.
     * For example, AWS::EC2::Instance for an application running on Amazon EC2 or
     * AWS::DynamoDB::Table for an Amazon DynamoDB table that the application used.
     * </p> </li> <li> <p>Amazon Web Services Service - The type of an Amazon Web
     * Services service. For example, AWS::DynamoDB for downstream calls to Amazon
     * DynamoDB that didn't target a specific table. </p> </li> <li> <p>Amazon Web
     * Services Service - The type of an Amazon Web Services service. For example,
     * AWS::DynamoDB for downstream calls to Amazon DynamoDB that didn't target a
     * specific table. </p> </li> <li> <p>remote - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Identifier for the service. Unique within the service map.</p> <ul> <li>
     * <p>Amazon Web Services Resource - The type of an Amazon Web Services resource.
     * For example, AWS::EC2::Instance for an application running on Amazon EC2 or
     * AWS::DynamoDB::Table for an Amazon DynamoDB table that the application used.
     * </p> </li> <li> <p>Amazon Web Services Service - The type of an Amazon Web
     * Services service. For example, AWS::DynamoDB for downstream calls to Amazon
     * DynamoDB that didn't target a specific table. </p> </li> <li> <p>Amazon Web
     * Services Service - The type of an Amazon Web Services service. For example,
     * AWS::DynamoDB for downstream calls to Amazon DynamoDB that didn't target a
     * specific table. </p> </li> <li> <p>remote - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Identifier for the service. Unique within the service map.</p> <ul> <li>
     * <p>Amazon Web Services Resource - The type of an Amazon Web Services resource.
     * For example, AWS::EC2::Instance for an application running on Amazon EC2 or
     * AWS::DynamoDB::Table for an Amazon DynamoDB table that the application used.
     * </p> </li> <li> <p>Amazon Web Services Service - The type of an Amazon Web
     * Services service. For example, AWS::DynamoDB for downstream calls to Amazon
     * DynamoDB that didn't target a specific table. </p> </li> <li> <p>Amazon Web
     * Services Service - The type of an Amazon Web Services service. For example,
     * AWS::DynamoDB for downstream calls to Amazon DynamoDB that didn't target a
     * specific table. </p> </li> <li> <p>remote - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Identifier for the service. Unique within the service map.</p> <ul> <li>
     * <p>Amazon Web Services Resource - The type of an Amazon Web Services resource.
     * For example, AWS::EC2::Instance for an application running on Amazon EC2 or
     * AWS::DynamoDB::Table for an Amazon DynamoDB table that the application used.
     * </p> </li> <li> <p>Amazon Web Services Service - The type of an Amazon Web
     * Services service. For example, AWS::DynamoDB for downstream calls to Amazon
     * DynamoDB that didn't target a specific table. </p> </li> <li> <p>Amazon Web
     * Services Service - The type of an Amazon Web Services service. For example,
     * AWS::DynamoDB for downstream calls to Amazon DynamoDB that didn't target a
     * specific table. </p> </li> <li> <p>remote - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline InsightImpactGraphService& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Identifier for the service. Unique within the service map.</p> <ul> <li>
     * <p>Amazon Web Services Resource - The type of an Amazon Web Services resource.
     * For example, AWS::EC2::Instance for an application running on Amazon EC2 or
     * AWS::DynamoDB::Table for an Amazon DynamoDB table that the application used.
     * </p> </li> <li> <p>Amazon Web Services Service - The type of an Amazon Web
     * Services service. For example, AWS::DynamoDB for downstream calls to Amazon
     * DynamoDB that didn't target a specific table. </p> </li> <li> <p>Amazon Web
     * Services Service - The type of an Amazon Web Services service. For example,
     * AWS::DynamoDB for downstream calls to Amazon DynamoDB that didn't target a
     * specific table. </p> </li> <li> <p>remote - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline InsightImpactGraphService& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Identifier for the service. Unique within the service map.</p> <ul> <li>
     * <p>Amazon Web Services Resource - The type of an Amazon Web Services resource.
     * For example, AWS::EC2::Instance for an application running on Amazon EC2 or
     * AWS::DynamoDB::Table for an Amazon DynamoDB table that the application used.
     * </p> </li> <li> <p>Amazon Web Services Service - The type of an Amazon Web
     * Services service. For example, AWS::DynamoDB for downstream calls to Amazon
     * DynamoDB that didn't target a specific table. </p> </li> <li> <p>Amazon Web
     * Services Service - The type of an Amazon Web Services service. For example,
     * AWS::DynamoDB for downstream calls to Amazon DynamoDB that didn't target a
     * specific table. </p> </li> <li> <p>remote - A downstream service of
     * indeterminate type.</p> </li> </ul>
     */
    inline InsightImpactGraphService& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The canonical name of the service.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The canonical name of the service.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The canonical name of the service.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The canonical name of the service.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The canonical name of the service.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The canonical name of the service.</p>
     */
    inline InsightImpactGraphService& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The canonical name of the service.</p>
     */
    inline InsightImpactGraphService& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The canonical name of the service.</p>
     */
    inline InsightImpactGraphService& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline InsightImpactGraphService& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline InsightImpactGraphService& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline InsightImpactGraphService& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline InsightImpactGraphService& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names for the service, including the canonical name.</p>
     */
    inline InsightImpactGraphService& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline InsightImpactGraphService& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline InsightImpactGraphService& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the Amazon Web Services account in which the service runs.</p>
     */
    inline InsightImpactGraphService& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Connections to downstream services.</p>
     */
    inline const Aws::Vector<InsightImpactGraphEdge>& GetEdges() const{ return m_edges; }

    /**
     * <p>Connections to downstream services.</p>
     */
    inline bool EdgesHasBeenSet() const { return m_edgesHasBeenSet; }

    /**
     * <p>Connections to downstream services.</p>
     */
    inline void SetEdges(const Aws::Vector<InsightImpactGraphEdge>& value) { m_edgesHasBeenSet = true; m_edges = value; }

    /**
     * <p>Connections to downstream services.</p>
     */
    inline void SetEdges(Aws::Vector<InsightImpactGraphEdge>&& value) { m_edgesHasBeenSet = true; m_edges = std::move(value); }

    /**
     * <p>Connections to downstream services.</p>
     */
    inline InsightImpactGraphService& WithEdges(const Aws::Vector<InsightImpactGraphEdge>& value) { SetEdges(value); return *this;}

    /**
     * <p>Connections to downstream services.</p>
     */
    inline InsightImpactGraphService& WithEdges(Aws::Vector<InsightImpactGraphEdge>&& value) { SetEdges(std::move(value)); return *this;}

    /**
     * <p>Connections to downstream services.</p>
     */
    inline InsightImpactGraphService& AddEdges(const InsightImpactGraphEdge& value) { m_edgesHasBeenSet = true; m_edges.push_back(value); return *this; }

    /**
     * <p>Connections to downstream services.</p>
     */
    inline InsightImpactGraphService& AddEdges(InsightImpactGraphEdge&& value) { m_edgesHasBeenSet = true; m_edges.push_back(std::move(value)); return *this; }

  private:

    int m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<InsightImpactGraphEdge> m_edges;
    bool m_edgesHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
