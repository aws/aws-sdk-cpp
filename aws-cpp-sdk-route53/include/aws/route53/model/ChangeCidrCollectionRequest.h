/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/model/CidrCollectionChange.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   */
  class ChangeCidrCollectionRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ChangeCidrCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeCidrCollection"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>The UUID of the CIDR collection to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The UUID of the CIDR collection to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The UUID of the CIDR collection to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The UUID of the CIDR collection to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The UUID of the CIDR collection to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The UUID of the CIDR collection to update.</p>
     */
    inline ChangeCidrCollectionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The UUID of the CIDR collection to update.</p>
     */
    inline ChangeCidrCollectionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The UUID of the CIDR collection to update.</p>
     */
    inline ChangeCidrCollectionRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A sequential counter that Amazon Route 53 sets to 1 when you create a
     * collection and increments it by 1 each time you update the collection.</p> <p>We
     * recommend that you use <code>ListCidrCollection</code> to get the current value
     * of <code>CollectionVersion</code> for the collection that you want to update,
     * and then include that value with the change request. This prevents Route 53 from
     * overwriting an intervening update: </p> <ul> <li> <p>If the value in the request
     * matches the value of <code>CollectionVersion</code> in the collection, Route 53
     * updates the collection.</p> </li> <li> <p>If the value of
     * <code>CollectionVersion</code> in the collection is greater than the value in
     * the request, the collection was changed after you got the version number.
     * Route 53 does not update the collection, and it returns a
     * <code>CidrCollectionVersionMismatch</code> error. </p> </li> </ul>
     */
    inline long long GetCollectionVersion() const{ return m_collectionVersion; }

    /**
     * <p>A sequential counter that Amazon Route 53 sets to 1 when you create a
     * collection and increments it by 1 each time you update the collection.</p> <p>We
     * recommend that you use <code>ListCidrCollection</code> to get the current value
     * of <code>CollectionVersion</code> for the collection that you want to update,
     * and then include that value with the change request. This prevents Route 53 from
     * overwriting an intervening update: </p> <ul> <li> <p>If the value in the request
     * matches the value of <code>CollectionVersion</code> in the collection, Route 53
     * updates the collection.</p> </li> <li> <p>If the value of
     * <code>CollectionVersion</code> in the collection is greater than the value in
     * the request, the collection was changed after you got the version number.
     * Route 53 does not update the collection, and it returns a
     * <code>CidrCollectionVersionMismatch</code> error. </p> </li> </ul>
     */
    inline bool CollectionVersionHasBeenSet() const { return m_collectionVersionHasBeenSet; }

    /**
     * <p>A sequential counter that Amazon Route 53 sets to 1 when you create a
     * collection and increments it by 1 each time you update the collection.</p> <p>We
     * recommend that you use <code>ListCidrCollection</code> to get the current value
     * of <code>CollectionVersion</code> for the collection that you want to update,
     * and then include that value with the change request. This prevents Route 53 from
     * overwriting an intervening update: </p> <ul> <li> <p>If the value in the request
     * matches the value of <code>CollectionVersion</code> in the collection, Route 53
     * updates the collection.</p> </li> <li> <p>If the value of
     * <code>CollectionVersion</code> in the collection is greater than the value in
     * the request, the collection was changed after you got the version number.
     * Route 53 does not update the collection, and it returns a
     * <code>CidrCollectionVersionMismatch</code> error. </p> </li> </ul>
     */
    inline void SetCollectionVersion(long long value) { m_collectionVersionHasBeenSet = true; m_collectionVersion = value; }

    /**
     * <p>A sequential counter that Amazon Route 53 sets to 1 when you create a
     * collection and increments it by 1 each time you update the collection.</p> <p>We
     * recommend that you use <code>ListCidrCollection</code> to get the current value
     * of <code>CollectionVersion</code> for the collection that you want to update,
     * and then include that value with the change request. This prevents Route 53 from
     * overwriting an intervening update: </p> <ul> <li> <p>If the value in the request
     * matches the value of <code>CollectionVersion</code> in the collection, Route 53
     * updates the collection.</p> </li> <li> <p>If the value of
     * <code>CollectionVersion</code> in the collection is greater than the value in
     * the request, the collection was changed after you got the version number.
     * Route 53 does not update the collection, and it returns a
     * <code>CidrCollectionVersionMismatch</code> error. </p> </li> </ul>
     */
    inline ChangeCidrCollectionRequest& WithCollectionVersion(long long value) { SetCollectionVersion(value); return *this;}


    /**
     * <p> Information about changes to a CIDR collection.</p>
     */
    inline const Aws::Vector<CidrCollectionChange>& GetChanges() const{ return m_changes; }

    /**
     * <p> Information about changes to a CIDR collection.</p>
     */
    inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }

    /**
     * <p> Information about changes to a CIDR collection.</p>
     */
    inline void SetChanges(const Aws::Vector<CidrCollectionChange>& value) { m_changesHasBeenSet = true; m_changes = value; }

    /**
     * <p> Information about changes to a CIDR collection.</p>
     */
    inline void SetChanges(Aws::Vector<CidrCollectionChange>&& value) { m_changesHasBeenSet = true; m_changes = std::move(value); }

    /**
     * <p> Information about changes to a CIDR collection.</p>
     */
    inline ChangeCidrCollectionRequest& WithChanges(const Aws::Vector<CidrCollectionChange>& value) { SetChanges(value); return *this;}

    /**
     * <p> Information about changes to a CIDR collection.</p>
     */
    inline ChangeCidrCollectionRequest& WithChanges(Aws::Vector<CidrCollectionChange>&& value) { SetChanges(std::move(value)); return *this;}

    /**
     * <p> Information about changes to a CIDR collection.</p>
     */
    inline ChangeCidrCollectionRequest& AddChanges(const CidrCollectionChange& value) { m_changesHasBeenSet = true; m_changes.push_back(value); return *this; }

    /**
     * <p> Information about changes to a CIDR collection.</p>
     */
    inline ChangeCidrCollectionRequest& AddChanges(CidrCollectionChange&& value) { m_changesHasBeenSet = true; m_changes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    long long m_collectionVersion;
    bool m_collectionVersionHasBeenSet = false;

    Aws::Vector<CidrCollectionChange> m_changes;
    bool m_changesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
